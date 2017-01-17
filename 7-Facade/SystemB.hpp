/*
* @Module: SystemB.hpp.
* @Auther: ngmj
* @Create date: 2017.01.17
*/

#ifndef _SYSTEM_B_HPP_
#define _SYSTEM_B_HPP_

#include <stdio.h>

class SystemB
{
public:
    SystemB(){}
    virtual ~SystemB(){}
    virtual void Operation()
    {
        printf("OperationB\n");
    }
};

#endif
