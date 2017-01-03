/*
* @Module: main.cpp 
* @Auther: ngmj
* @Create date: 2017.01.03
*/

#include "FileLogFactory.hpp"
#include "DatabaseLogFactory.hpp"

int main(int argc, char* argv[])
{
    LogFactory * logFactory = new DatabaseLogFactory();
    Log * log = logFactory->createLog();
    log->writeLog();
    return 0;
}


