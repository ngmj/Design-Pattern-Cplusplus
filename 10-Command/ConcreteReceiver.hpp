/*
* @Module: ConcreteReceiver.hpp 
* @Auther: ngmj
* @Create date: 2017.02.06
*/

#ifndef _CONCRETE_RECEIVER_H_
#define _CONCRETE_RECEIVER_H_

#include <stdio.h>
#include "Receiver.h"

class ConcreteReceiver : public Receiver
{
public:
    virtual ~ConcreteReceiver(){}
    virtual void Action()
    {
        printf("ConcreteReceiver action.\n");
    }
};

#endif
