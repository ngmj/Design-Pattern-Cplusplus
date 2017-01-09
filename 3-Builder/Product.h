/*
* @Module: Product interface header.
* @Auther: ngmj
* @Create date: 2017.01.09
*/

#ifndef _PRODUCT_H_
#define _PRODUCT_H_

class Product
{
public:
    virtual ~Product(){}
    virtual void Show() = 0;
};

#endif
