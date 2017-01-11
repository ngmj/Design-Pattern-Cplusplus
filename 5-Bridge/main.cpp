/*
* @Module: main.cpp 
* @Auther: ngmj
* @Create date: 2017.01.11
*/

#include "Os.h"
#include "AppleOs.hpp"
#include "WindowOs.hpp"
#include "Computer.h"
#include "AppleComputer.hpp"
#include "DellComputer.hpp"

int main(int argc, char* argv[])
{
    Os* pAppleOs = new AppleOs();
    Os* pWindowOs = new WindowOs();

    Computer* pAppleComputer = new AppleComputer(pAppleOs);
    pAppleComputer->InstallOs();

    Computer* pDellComputer = new DellComputer(pWindowOs);
    pDellComputer->InstallOs();

    delete pAppleOs;
    delete pWindowOs;
    delete pAppleComputer;
    delete pDellComputer;
    return 0;
}
