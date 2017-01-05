/*
* @Module: TraditionalAirCondition.hpp.
* @Auther: ngmj
* @Create date: 2017.01.04
*/

#ifndef _TRADITIONAL_AIR_CONDITION_H_
#define _TRADITIONAL_AIR_CONDITION_H_

#include "AirCondition.h"
#include <stdio.h>

class TraditionalAirCondition : public AirCondition
{
public:
    virtual ~TraditionalAirCondition(){}
    virtual void Open()
    {
        printf("To open TraditionalAirCondition\n");
    }
    virtual void Close()
    {
        printf("To close TraditionalAirCondition\n");
    }
};

#endif
