/*
* @Module: ConcreteStateA.h 
* @Auther: ngmj
* @Create date: 2017.02.15
*/

#ifndef _CONCRETE_STATE_A_H_
#define _CONCRETE_STATE_A_H_

#include <stdio.h>
#include "State.h"
#include "Context.h"
#include "ConcreteStateB.h"

class ConcreteStateA : public State
{
    static State* m_stat;
public:
    static State* Instance();
    virtual ~ConcreteStateA();
    virtual void Handle(Context* ctx);
};

#endif
