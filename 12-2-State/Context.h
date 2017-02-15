/*
* @Module: Context.h 
* @Auther: ngmj
* @Create date: 2017.02.15
*/

#ifndef _CONTEXT_H_
#define _CONTEXT_H_

#include <vector>
#include "State.h"

class Context
{
    std::vector<int> m_statNoVec;    
    unsigned int curNoIndex;
public:
    Context();
    virtual ~Context();
    virtual int AddStat(int statNo);
    virtual int GetNextState();
};

#endif
