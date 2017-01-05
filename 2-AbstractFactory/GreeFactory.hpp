/*
* @Module: GreeFactory.hpp.
* @Auther: ngmj
* @Create date: 2017.01.05
*/

#ifndef _GREE_FACTORY_H_
#define _GREE_FACTORY_H_

#include "AbstractFactory.h"
//#include "Refrigerator.h"
//#include "AirCondition.h"
#include "TraditionalRefrigerator.hpp"
#include "EnergyEfficientAirCondition.hpp"

class GreeFactory
{
public:
    virtual ~GreeFactory(){}
    virtual Refrigerator* createFridge()
    {
        return new TraditionalRefrigerator();
    }
    virtual AirCondition* createAirCondition()
    {
        return new EnergyEfficientAirCondition();
    }
};

#endif
