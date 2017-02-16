/*
* @Module: DivideStrategy.hpp 
* @Auther: ngmj
* @Create date: 2017.02.16
*/

#ifndef _DIVIDE_STRATEGY_HPP_
#define _DIVIDE_STRATEGY_HPP_

#include <stdio.h>
#include "Strategy.h"

class DivideStrategy : public Strategy
{
public:
    virtual ~DivideStrategy(){}
    virtual int Calculate(int a, int b)
    {
        printf("DivideStrategy: (%d / %d)\n", a, b);
        if (0 == b)
        {
            printf("Invalid number\n");
            return 0;
        }
        return a / b;
    }
};

#endif
