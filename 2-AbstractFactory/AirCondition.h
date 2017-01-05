/*
* @Module: AirCondition interface header.
* @Auther: ngmj
* @Create date: 2017.01.04
*/

#ifndef _AIRCONDITION_H_
#define _AIRCONDITION_H_

class AirCondition
{
public:
    virtual ~AirCondition(){}
    virtual void Open() = 0;
    virtual void Close() = 0;
};

#endif
