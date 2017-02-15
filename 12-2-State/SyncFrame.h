/*
* @Module: SyncFrame.h 
* @Auther: ngmj
* @Create date: 2017.02.15
*/

#ifndef _SYNCFRAME_H_
#define _SYNCFRAME_H_

#include <map>
#include <string>
#include "State.h"
#include "Context.h"

class SyncFrame
{
    std::map<int, State*> m_statMap;    
    int curStatNo;
public:
    SyncFrame();
    virtual ~SyncFrame();
    virtual void Register(int no, State* stat);
    virtual int Init(int statno);
    virtual int Process(Context* ctx);
    //virtual int CallBack();
    virtual int Request(const std::string& reqStr, std::string &rspStr);
};

#endif
