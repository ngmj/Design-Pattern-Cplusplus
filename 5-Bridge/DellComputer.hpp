/*
* @Module: DellComputer.hpp.
* @Auther: ngmj
* @Create date: 2017.01.11
*/

#ifndef _DELL_COMPUTER_H_
#define _DELL_COMPUTER_H_

#include "Computer.h"
#include "Os.h"
#include <stdio.h>

class DellComputer : public Computer
{
public:
    DellComputer(Os* _pos)
        : Computer(_pos)
    {
    }
    virtual ~DellComputer(){}
    virtual void InstallOs()
    {
        printf("DellComputer InstallOs...\n");
        pos->Install();
    }
};

#endif
