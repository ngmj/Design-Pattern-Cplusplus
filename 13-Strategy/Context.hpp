/*
* @Module: Context.hpp 
* @Auther: ngmj
* @Create date: 2017.02.16
*/

#ifndef _CONTEXT_HPP_
#define _CONTEXT_HPP_

#include "Strategy.h"

class Context
{
    Strategy* m_pStrategy;    
public:
    Context(){}
    virtual ~Context(){}
    virtual int SetStrategy(Strategy* pStrategy)
    {
        m_pStrategy = pStrategy;
    }
    virtual int Calculate(int a, int b) 
    {
        return m_pStrategy->Calculate(a, b);
    }
};

#endif
