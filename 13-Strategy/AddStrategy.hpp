/*
* @Module: AddStrategy.hpp 
* @Auther: ngmj
* @Create date: 2017.02.16
*/

#ifndef _ADD_STRATEGY_HPP_
#define _ADD_STRATEGY_HPP_

#include <stdio.h>
#include "Strategy.h"

class AddStrategy : public Strategy
{
public:
    virtual ~AddStrategy(){}
    virtual int Calculate(int a, int b)
    {
        printf("AddStrategy: (%d + %d)\n", a, b);
        return a + b;
    }
};

#endif
