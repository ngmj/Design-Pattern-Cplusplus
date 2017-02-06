/*
* @Module: Invoker.hpp 
* @Auther: ngmj
* @Create date: 2017.02.06
*/

#ifndef _INVOKER_H_
#define _INVOKER_H_

#include <stdio.h>
#include "Command.h"

class Invoker
{
    Command* cmd;
public:
    Invoker(Command* _cmd)
        : cmd(_cmd)
    {}
    virtual ~Invoker(){}
    virtual void Call()
    {
        printf("Invoker calling.\n");
        cmd->Execute();
    }
};

#endif
