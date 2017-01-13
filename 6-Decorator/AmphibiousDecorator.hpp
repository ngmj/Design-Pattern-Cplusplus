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
