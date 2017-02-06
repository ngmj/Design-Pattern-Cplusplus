/*
* @Module: Command interface header.
* @Auther: ngmj
* @Create date: 2017.01.09
*/

#ifndef _COMMAND_H_
#define _COMMAND_H_

#include "Receiver.h"

class Command
{
protected:
    Receiver* rec;
public:
    Command(Receiver* _rec)
        : rec(_rec)
    {}
    virtual ~Command(){}
    virtual void Execute() = 0;
};

#endif
