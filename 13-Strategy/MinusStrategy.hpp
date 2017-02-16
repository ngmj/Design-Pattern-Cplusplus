/*
* @Module: MinusStrategy.hpp 
* @Auther: ngmj
* @Create date: 2017.02.16
*/

#ifndef _MINUS_STRATEGY_HPP_
#define _MINUS_STRATEGY_HPP_

#include <stdio.h>
#include "Strategy.h"

class MinusStrategy : public Strategy
{
public:
    virtual ~MinusStrategy(){}
    virtual int Calculate(int a, int b)
    {
        printf("MinusStrategy: (%d - %d)\n", a, b);
        return a - b;
    }
};

#endif
