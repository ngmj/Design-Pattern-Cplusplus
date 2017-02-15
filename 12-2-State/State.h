/*
* @Module: State interface header.
* @Auther: ngmj
* @Create date: 2017.02.15
*/

#ifndef _STATE_H_
#define _STATE_H_

#include <string>

class Context;

class State
{
public:
    virtual ~State(){}
    virtual int HandleEncode(Context* ctx, std::string&) = 0;
    virtual int HandleProcess(Context* ctx, std::string&) = 0;
};

#endif
