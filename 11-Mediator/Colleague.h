/*
* @Module: Colleague interface header.
* @Auther: ngmj
* @Create date: 2017.02.14
*/

#ifndef _COLLEAGUE_H_
#define _COLLEAGUE_H_

#include <string>
//#include "Mediator.h"

class Mediator;

class Colleague
{
public:
    virtual ~Colleague(){}
    virtual int SetMediator(Mediator *) = 0;
    virtual int SendMsg(int no, const std::string &msg) = 0;
    virtual int RecvMsg(const std::string &msg) = 0;
};

#endif
