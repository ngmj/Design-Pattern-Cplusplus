/*
* @Module: Refrigerator interface header.
* @Auther: ngmj
* @Create date: 2017.01.04
*/

#ifndef _REFRIGERATOR_H_
#define _REFRIGERATOR_H_

class Refrigerator
{
public:
    virtual ~Refrigerator(){}
    virtual void Open() = 0;
    virtual void Close() = 0;
};

#endif
