/*
* @Module: DatabaseLogFactory.hpp
* @Auther: ngmj
* @Create date: 2017.01.03
*/

#ifndef _DATABASE_LOG_FACTORY_HPP_
#define _DATABASE_LOG_FACTORY_HPP_

#include "LogFactory.h"
#include "DatabaseLog.hpp"

class DatabaseLogFactory : public LogFactory 
{
public:
    virtual Log* createLog()
    {
        return new DatabaseLog(); 
    }
    DatabaseLogFactory(){}
    virtual ~DatabaseLogFactory(){}
};

#endif
