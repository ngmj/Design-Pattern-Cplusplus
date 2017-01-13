/*
* @Module: GanonDecorator.hpp.
* @Auther: ngmj
* @Create date: 2017.01.12
*/

#ifndef _GANON_DECORATOR_H_
#define _GANON_DECORATOR_H_

#include "Decorator.h"
#include <stdio.h>

class GanonDecorator : public Decorator 
{
public:
    GanonDecorator(Tank* _pt)
        : Decorator(_pt)
    {
        pt->AddFirepower(50);
    }
    virtual ~GanonDecorator(){}
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
