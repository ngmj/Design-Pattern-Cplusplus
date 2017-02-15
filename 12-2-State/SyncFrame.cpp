
#include "stdio.h"
#include <utility>
#include <sstream>
#include "SyncFrame.h"

using namespace std;

SyncFrame::SyncFrame()
    : curStatNo(0)
{
}

SyncFrame::~SyncFrame()
{
}

void SyncFrame::Register(int no, State* stat)
{
    std::map<int, State*>::iterator it = m_statMap.find(no);
    if (m_statMap.end() != it)
    {
        it->second = stat;
    }else
    {
        m_statMap.insert(make_pair(no, stat));
    }
}

int SyncFrame::Init(int statno)
{
    curStatNo = statno;
    return 0;
}

int SyncFrame::Process(Context *ctx)
{
    State* stat;
    string reqStr;
    string rspStr;
    while (curStatNo)
    {
        map<int, State*>::iterator it = m_statMap.find(curStatNo);
        if (m_statMap.end() == it)
        {
            curStatNo = 0;
            continue;
        }
        stat = it->second;
        
        stat->HandleEncode(ctx, reqStr);
        Request(reqStr, rspStr);
        curStatNo = stat->HandleProcess(ctx, rspStr);
    }
    return 0;
}

int SyncFrame::Request(const string& reqStr, string &rspStr) 
{
    printf("to send msg: %s\n", reqStr.c_str());
    ostringstream s;
    s << "Recv msg from " << curStatNo << "."; 
    rspStr = s.str();
    return 0;
}

