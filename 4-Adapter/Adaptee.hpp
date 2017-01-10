/*
* @Module: Adaptee.hpp 
* @Auther: ngmj
* @Create date: 2017.01.10
*/

#ifndef _ADAPTEE_HPP_
#define _ADAPTEE_HPP_

#include <stdio.h>

class Adaptee
{
public:
    virtual ~Adaptee(){}
    virtual void SpecificRequest()
    {
        printf("I am SpecificRequest of Adaptee\n");
    }
};

#endif
