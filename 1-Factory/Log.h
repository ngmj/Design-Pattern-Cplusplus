/*
* @Module: Log interface header.
* @Auther: ngmj
* @Create date: 2017.01.03
*/

#ifndef _LOG_H_
#define _LOG_H_

#include "Log.h"

class Log
{
public:
    virtual ~Log(){}
    virtual int writeLog() = 0;
};

#endif
