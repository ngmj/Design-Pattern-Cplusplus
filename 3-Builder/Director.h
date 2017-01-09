/*
* @Module: Director interface header.
* @Auther: ngmj
* @Create date: 2017.01.09
*/

#ifndef _DIRECTOR_H_
#define _DIRECTOR_H_

#include <stdio.h>
#include "Builder.h"
#include "Product.h"

class Director
{
    Builder *pbuilder;
public:
    virtual ~Director(){}
    virtual void SetBuilder(Builder *_pb)
    {
        pbuilder = _pb;
    }
    virtual Product* Construct()
    {
        if (NULL == pbuilder)
        {
            printf("Builder is NULL");
            return NULL;
        }
        return pbuilder->Construct();
    }
};

#endif
