/*
* @Module: ReadHtState.h
* @Auther: ngmj
* @Create date: 2017.02.15
*/

#ifndef _READ_HT_STATE_H_
#define _READ_HT_STATE_H_

#include <string>
#include "State.h"
#include "Context.h"

class ReadHtState : public State
{
public:
    ReadHtState();
    virtual ~ReadHtState();
    virtual int HandleEncode(Context* ctx, std::string&);
    virtual int HandleProcess(Context* ctx, std::string&);
    static int GetStatId();
};

#endif
