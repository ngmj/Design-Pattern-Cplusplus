/*
* @Module: AmphibiousDecorator.hpp.
* @Auther: ngmj
* @Create date: 2017.01.12
*/

#ifndef _AMPHIBIOUS_DECORATOR_H_
#define _AMPHIBIOUS_DECORATOR_H_

#include "Decorator.h"
#include <stdio.h>

class AmphibiousDecorator : public Decorator 
{
public:
    AmphibiousDecorator(Tank* _pt)
        : Decorator(_pt)
    {
        // 这里是给pt加速，即如果pt是GanonDecorator，那么实际上GanonDecorator的速度是新的，
        // 但是我们的目地实际上给GanonDecorator指向的那个Tank加速，这里考虑怎么写
        pt->AddSpeed(100);
    }
    virtual ~AmphibiousDecorator(){}
    void Run()
    {
        pt->Run();
    }
    void Shoot()
    {
        pt->Shoot();
    }
};

#endif
