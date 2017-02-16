/*
* @Module: MultiplyStrategy.hpp 
* @Auther: ngmj
* @Create date: 2017.02.16
*/

#ifndef _MULTIPLY_STRATEGY_HPP_
#define _MULTIPLY_STRATEGY_HPP_

#include <stdio.h>
#include "Strategy.h"

class MultiplyStrategy : public Strategy
{
public:
    virtual ~MultiplyStrategy(){}
    virtual int Calculate(int a, int b)
    {
        printf("MultiplyStrategy: (%d * %d)\n", a, b);
        return a * b;
    }
};

#endif
