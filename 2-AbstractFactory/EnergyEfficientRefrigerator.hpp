/*
* @Module: EnergyEfficientRefrigerator.hpp.
* @Auther: ngmj
* @Create date: 2017.01.04
*/

#ifndef _ENERGY_EFFICIENT_REFRIGERATOR_H_
#define _ENERGY_EFFICIENT_REFRIGERATOR_H_

#include <stdio.h>

class EnergyEfficientRefrigerator : public Refrigerator
{
public:
    virtual ~EnergyEfficientRefrigerator(){}
    virtual void Open()
    {
        printf("To open EnergyEfficientRefrigerator\n");
    }
    virtual void Close()
    {
        printf("To close EnergyEfficientRefrigerator\n");
    }
};

#endif
