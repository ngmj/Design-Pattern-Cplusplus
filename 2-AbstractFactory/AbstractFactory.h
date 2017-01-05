/*
* @Module: AbstractFactory interface header.
* @Auther: ngmj
* @Create date: 2017.01.04
*/

#ifndef _ABSTRACT_FACTORY_H_
#define _ABSTRACT_FACTORY_H_

#include "AirCondition.h"
#include "Refrigerator.h"

class AbstractFactory
{
public:
    virtual ~AbstractFactory(){}
    virtual Refrigerator* createFridge() = 0;
    virtual AirCondition* createAirCondition() = 0;
};

#endif
