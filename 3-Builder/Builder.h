/*
* @Module: Builder interface header.
* @Auther: ngmj
* @Create date: 2017.01.09
*/

#ifndef _BUILDER_H_
#define _BUILDER_H_

#include "Product.h"

class Builder
{
public:
    virtual ~Builder(){}
    virtual Product * Construct() = 0;
};

#endif
