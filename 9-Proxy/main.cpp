/*
* @Module: main.cpp 
* @Auther: ngmj
* @Create date: 2017.01.22
*/

#include "AbstractSubject.h"
#include "RealSubject.hpp"
#include "Proxy.hpp"

int main(int argc, char* argv[])
{
    Proxy* pProxy = new Proxy();
    pProxy->Request();

    delete pProxy;
    return 0;
}
