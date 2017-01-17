/*
* @Module: main.cpp 
* @Auther: ngmj
* @Create date: 2017.01.17
*/

#include "Facade.hpp"

int main(int argc, char* argv[])
{
    Facade* pfacade = new Facade();
    pfacade->WrapOperation();

    delete pfacade;
    return 0;
}
