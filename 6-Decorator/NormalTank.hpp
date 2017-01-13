/*
* @Module: NormalTank.hpp 
* @Auther: ngmj
* @Create date: 2017.01.12
*/

#ifndef _NORMAL_TANK_HPP_
#define _NORAML_TANK_HPP_

#include "Tank.h"
#include <stdio.h>

class NormalTank : public Tank
{
public:
    NormalTank()
        : Tank(1, 2)
    {}
    virtual ~NormalTank(){}
    virtual void Run()
    {
        printf("I'm speed is %d\n", speed);
    }
    virtual void Shoot()
    {
        printf("I'm firepower is %d\n", firepower);
    }
};

#endif
