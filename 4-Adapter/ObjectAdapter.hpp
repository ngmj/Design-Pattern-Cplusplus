/*
* @Module: ObjectAdapter.hpp 
* @Auther: ngmj
* @Create date: 2017.01.10
*/

#ifndef _OBJECT_ADAPTER_HPP_
#define _OBJECT_ADAPTER_HPP_

#include <stdio.h>
#include "Target.h"
#include "Adaptee.hpp"

class ObjectAdapter : public Target
{
    Adaptee* padaptee;
public:
    ObjectAdapter(Adaptee* _padaptee)
    {
        padaptee = _padaptee;
    }
    virtual ~ObjectAdapter(){}
    virtual void Request()
    {
        // do something, for example: to change some parameter to fit Adaptee
        // ....
        padaptee->SpecificRequest();
    }
};

#endif
