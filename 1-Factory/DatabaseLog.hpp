/*
* @Module: DatabaseLog header.
* @Auther: ngmj
* @Create date: 2017.01.03
*/

#ifndef _DATABASE_LOG_HPP_
#define _DATABASE_LOG_HPP_

#include <stdio.h>
#include "Log.h"

class DatabaseLog : public Log
{
public:
    DatabaseLog(){}
    virtual ~DatabaseLog(){}
    int writeLog()
    {
        printf("writeLog in DatabaseLog\n");
        return 0;
    }
};

#endif
