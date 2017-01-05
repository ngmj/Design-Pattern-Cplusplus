/*
* @Module: HaierFactory.hpp.
* @Auther: ngmj
* @Create date: 2017.01.05
*/

#ifndef _HAIER_FACTORY_H_
#define _HAIER_FACTORY_H_

#include "AbstractFactory.h"
//#include "Refrigerator.h"
//#include "AirCondition.h"
#include "EnergyEfficientRefrigerator.hpp"
#include "TraditionalAirCondition.hpp"

class HaierFactory
{
public:
    virtual ~HaierFactory(){}
    virtual Refrigerator* createFridge()
    {
        return new EnergyEfficientRefrigerator();
    }
    virtual AirCondition* createAirCondition()
    {
        return new TraditionalAirCondition();
    }
};

#endif
