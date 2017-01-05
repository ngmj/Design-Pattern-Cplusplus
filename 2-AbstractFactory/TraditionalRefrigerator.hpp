/*
* @Module: TraditionalRefrigerator.hpp.
* @Auther: ngmj
* @Create date: 2017.01.04
*/

#ifndef _TRADITIONAL_REFRIGERATOR_H_
#define _TRADITIONAL_REFRIGERATOR_H_

#include <stdio.h>

class TraditionalRefrigerator : public Refrigerator
{
public:
    virtual ~TraditionalRefrigerator(){}
    virtual void Open()
    {
        printf("To open TraditionalRefrigerator\n");
    }
    virtual void Close()
    {
        printf("To close TraditionalRefrigerator\n");
    }
};

#endif
