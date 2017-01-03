/*
* @Module: LogFactory interface header.
* @Auther: ngmj
* @Create date: 2017.01.03
*/

#ifndef _LOG_FACTORY_H_
#define _LOG_FACTORY_H_

#include "Log.h"

class LogFactory
{
public:
    virtual Log* createLog() = 0;
    LogFactory(){}
    virtual ~LogFactory(){}
};

#endif
