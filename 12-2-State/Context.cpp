#include <utility>
#include "Context.h"

using namespace std;

Context::Context()
    : curNoIndex(0)
{
}

Context::~Context()
{
}

int Context::AddStat(int statNo)
{
    vector<int>::const_iterator cit = m_statNoVec.begin();
    for (; m_statNoVec.end() != cit; cit++)
    {
        if (*cit == statNo)
        {
            return 0;
        }
    }
    m_statNoVec.push_back(statNo);
    return 0;
}

int Context::GetNextState()
{
    if (curNoIndex < m_statNoVec.size())
    {
        int statNo = m_statNoVec[curNoIndex];
        curNoIndex++;
        return statNo;
    }else
    {
        return 0;
    }
    return 0;
}

