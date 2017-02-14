/*
* @Module: ConcreteColleagueB.hpp 
* @Auther: ngmj
* @Create date: 2017.02.14
*/

#ifndef _CONCRETE_COLLEAGUE_B_H_
#define _CONCRETE_COLLEAGUE_B_H_

#include <stdio.h>
#include <string>
#include "Mediator.h"
#include "Colleague.h"

class ConcreteColleagueB: public Colleague
{
    Mediator* m_mediator;
public:
    virtual ~ConcreteColleagueB(){}
    int SetMediator(Mediator *_mediator)
    {
        m_mediator = _mediator;
    } 
    int SendMsg(int no, const std::string &msg)
    {
        return m_mediator->Operator(no, msg);
    }
    int RecvMsg(const std::string &msg)
    {
        printf("ConcreteColleagueB reveivemsg: %s\n", msg.c_str());
    }
};

#endif
