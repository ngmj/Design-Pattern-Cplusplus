/*
* @Module: FileLogFactory.hpp
* @Auther: ngmj
* @Create date: 2017.01.03
*/

#ifndef _FILE_LOG_FACTORY_HPP_
#define _FILE_LOG_FACTORY_HPP_

#include "LogFactory.h"
#include "FileLog.hpp"

class FileLogFactory : public LogFactory 
{
public:
    virtual Log* createLog()
    {
        return new FileLog(); 
    }
    FileLogFactory(){}
    virtual ~FileLogFactory(){}
};

#endif
