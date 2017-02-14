/*
* @Module: Mediator interface header.
* @Auther: ngmj
* @Create date: 2017.02.14
*/

#ifndef _MEDIATOR_H_
#define _MEDIATOR_H_

#include <string>
#include "Colleague.h"

class Mediator
{
public:
    virtual ~Mediator(){}
    virtual int Operator(int no, const std::string &msg) = 0;
    virtual int Register(int no, Colleague *) = 0;
};

#endif
