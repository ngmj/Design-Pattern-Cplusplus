/*
* @Module: Os interface header.
* @Auther: ngmj
* @Create date: 2017.01.11
*/

#ifndef _OS_H_
#define _OS_H_

class Os
{
public:
    virtual ~Os(){}
    virtual void Install() = 0;
};

#endif
