/*
* @Module: State interface header.
* @Auther: ngmj
* @Create date: 2017.02.15
*/

#ifndef _STATE_H_
#define _STATE_H_

class Context;

class State
{
public:
    virtual ~State(){}
    virtual void Handle(Context* ctx) = 0;
};

#endif
