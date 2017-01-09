/*
* @Module: AirConditionBuilder.hpp.
* @Auther: ngmj
* @Create date: 2017.01.09
*/

#ifndef _AIRCONDITION_BUILDER_HPP_
#define _AIRCONDITION_BUILDER_HPP_

#include "Product.h"
#include "Builder.h"
#include "AirCondition.hpp"

class AirConditionBuilder : public Builder
{
public:
    virtual ~AirConditionBuilder(){}
    virtual std::string ConstructEngine()
    {
        return "Haier-V-Engine";
    }
    virtual std::string ConstructShell()
    {
        return "JHSA012A-SHELL";
    }
    virtual std::string ConstructCompressor()
    {
        return "COMPRESSOR-HCABLE";
    }
    virtual Product * Construct()
    {
        AirCondition* p = new AirCondition();
        p->SetEngine(ConstructEngine());
        p->SetShell(ConstructShell());
        p->SetCompressor(ConstructCompressor());
        return p;
    }
};

#endif
