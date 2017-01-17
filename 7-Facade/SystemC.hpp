/*
* @Module: SystemC.hpp.
* @Auther: ngmj
* @Create date: 2017.01.17
*/

#ifndef _SYSTEM_C_HPP_
#define _SYSTEM_C_HPP_

#include <stdio.h>

class SystemC
{
public:
    SystemC(){}
    virtual ~SystemC(){}
    virtual void Operation()
    {
        printf("OperationC\n");
    }
};

#endif
