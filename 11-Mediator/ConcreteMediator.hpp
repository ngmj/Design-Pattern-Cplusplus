/*
* @Module: ConcreteMediator.hpp 
* @Auther: ngmj
* @Create date: 2017.02.14
*/

#ifndef _CONCRETE_MEDIATOR_H_
#define _CONCRETE_MEDIATOR_H_

#include <stdio.h>
#include <string>
#include <map>
#include <utility>
#include "Mediator.h"
#include "Colleague.h"

class ConcreteMediator : public Mediator
{
    std::map<int, Colleague*> m_mpColleague;
public:
    virtual ~ConcreteMediator(){}
    virtual int Operator(int no, const std::string &msg)
    {
        std::map<int, Colleague*>::iterator itColleague = m_mpColleague.find(no);
        if (m_mpColleague.end() == itColleague)
        {
            printf("not found this colleague [%d]!\n", no);
            return 1;
        }
        return itColleague->second->RecvMsg(msg);
    }
    virtual int Register(int no, Colleague *_Colleague)
    {
        std::map<int, Colleague*>::iterator itColleague = m_mpColleague.find(no);
        if (m_mpColleague.end() != itColleague)
        {
            printf("this colleague already existed [%d]!\n", no);
            return 0;
        }
        m_mpColleague.insert(std::make_pair(no, _Colleague));
        _Colleague->SetMediator(this);
        return 0;
    }
};

#endif
