/*
* @Module: Target interface header.
* @Auther: ngmj
* @Create date: 2017.01.10
*/

#ifndef _TARGET_H_
#define _TARGET_H_

class Target
{
public:
    virtual ~Target(){}
    virtual void Request() = 0;
};

#endif
