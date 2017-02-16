/*
* @Module: Strategy interface header.
* @Auther: ngmj
* @Create date: 2017.02.16
*/

#ifndef _STRATEGY_H_
#define _STRATEGY_H_

class Strategy
{
public:
    virtual ~Strategy(){}
    virtual int Calculate(int a, int b) = 0;
};

#endif
