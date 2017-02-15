/*
* @Module: ConcreteStateB.h 
* @Auther: ngmj
* @Create date: 2017.02.15
*/

#ifndef _CONCRETE_STATE_B_H_
#define _CONCRETE_STATE_B_H_

#include <stdio.h>
#include "State.h"
#include "Context.h"
#include "ConcreteStateA.h"

class ConcreteStateB : public State
{
    static State* m_stat;
public:
    static State* Instance();
    virtual ~ConcreteStateB();
    virtual void Handle(Context* ctx);
};

#endif
