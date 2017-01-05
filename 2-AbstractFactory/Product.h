/*
* @Module: Product interface header.
* @Auther: ngmj
* @Create date: 2017.01.05
*/

#ifndef _PRODUCT_H_
#define _PRODUCT_H_

class Product
{
public:
    virtual ~Product(){}
    virtual void Open() = 0;
    virtual void Close() = 0;
};

#endif
