/*
* @Module: EnergyEfficientAirCondition.hpp.
* @Auther: ngmj
* @Create date: 2017.01.04
*/

#ifndef _ENERGY_EFFICIENT_AIR_CONDITION_H_
#define _ENERGY_EFFICIENT_AIR_CONDITION_H_

#include "AirCondition.h"
#include <stdio.h>

class EnergyEfficientAirCondition : public AirCondition
{
public:
    virtual ~EnergyEfficientAirCondition(){}
    virtual void Open()
    {
        printf("To open EnergyEfficientAirCondition\n");
    }
    virtual void Close()
    {
        printf("To close EnergyEfficientAirCondition\n");
    }
};

#endif
