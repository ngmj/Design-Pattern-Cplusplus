/*
* @Module: SystemA.hpp.
* @Auther: ngmj
* @Create date: 2017.01.17
*/

#ifndef _SYSTEM_A_HPP_
#define _SYSTEM_A_HPP_

#include <stdio.h>

class SystemA
{
public:
    SystemA(){}
    virtual ~SystemA(){}
    virtual void Operation()
    {
        printf("OperationA\n");
    }
};

#endif
