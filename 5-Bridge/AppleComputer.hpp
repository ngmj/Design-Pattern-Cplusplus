/*
* @Module: AppleComputer.hpp.
* @Auther: ngmj
* @Create date: 2017.01.11
*/

#ifndef _APPLE_COMPUTER_H_
#define _APPLE_COMPUTER_H_

#include "Computer.h"
#include "Os.h"
#include <stdio.h>

class AppleComputer : public Computer
{
public:
    AppleComputer(Os* _pos)
        : Computer(_pos)
    {
    }
    virtual ~AppleComputer(){}
    virtual void InstallOs()
    {
        printf("AppleComputer InstallOs...\n");
        pos->Install();
    }
};

#endif
