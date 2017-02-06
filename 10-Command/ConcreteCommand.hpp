/*
* @Module: ConcreteCommand.hpp 
* @Auther: ngmj
* @Create date: 2017.02.06
*/

#ifndef _CONCRETE_COMMAND_HPP_
#define _CONCRETE_COMMAND_HPP_

#include <stdio.h>
#include "Command.h"
#include "Receiver.h"

class ConcreteCommand : public Command
{
public:
    ConcreteCommand(Receiver* _rec)
        : Command(_rec)
    {}
    virtual ~ConcreteCommand(){}
    virtual void Execute()
    {
        rec->Action();
    }
};

#endif
