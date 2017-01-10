/*
* @Module: Adapter.hpp 
* @Auther: ngmj
* @Create date: 2017.01.10
*/

#ifndef _CLASS_ADAPTER_HPP_
#define _CLASS_ADAPTER_HPP_

#include <stdio.h>
#include "Target.h"
#include "Adaptee.hpp"

class ClassAdapter : public Target, private Adaptee
{
public:
    virtual ~ClassAdapter(){}
    virtual void Request()
    {
        // do something, for example: to change some parameter to fit Adaptee
        // ....
        SpecificRequest();
    }
};

#endif
