/*
* @Module: Context.hpp 
* @Auther: ngmj
* @Create date: 2017.02.15
*/

#ifndef _CONTEXT_HPP_
#define _CONTEXT_HPP_

#include "State.h"

class Context
{
    State* m_stat;    
public:
    Context(State* stat);
    virtual ~Context();
    virtual int ChangeState(State* stat);
    virtual void Request(); 
};

#endif
