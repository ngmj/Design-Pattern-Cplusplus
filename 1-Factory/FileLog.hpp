/*
* @Module: FileLog header.
* @Auther: ngmj
* @Create date: 2017.01.03
*/

#ifndef _FILE_LOG_HPP_
#define _FILE_LOG_HPP_

#include <stdio.h>
#include "Log.h"

class FileLog : public Log
{
public:
    FileLog(){}
    virtual ~FileLog(){}
    int writeLog()
    {
        printf("writeLog in FileLog\n");
        return 0;
    }
};

#endif
