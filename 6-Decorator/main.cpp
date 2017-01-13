/*
* @Module: main.cpp 
* @Auther: ngmj
* @Create date: 2017.01.11
*/

#include "Tank.h"
#include "NormalTank.hpp"
#include "GanonDecorator.hpp"
#include "AmphibiousDecorator.hpp"
#include "Decorator.h"

int main(int argc, char* argv[])
{
    // 一定要明白，这里装饰后，是希望它是一辆新的坦克，还是在原有的基础上增加了一些装饰
    Tank* pNormalTank = new NormalTank();
    Tank* pGanonTank = new GanonDecorator(pNormalTank);
    Tank* pAmphibious = new AmphibiousDecorator(pGanonTank);
    //Tank* pAmphibious = new AmphibiousDecorator(pNormalTank);

    printf("NormalTank to execute the task:\n");
    pNormalTank->Run();
    pNormalTank->Shoot();

    printf("\n\nGanonTank to execute the task:\n");
    pGanonTank->Run();
    pGanonTank->Shoot();

    printf("\n\nAmphibious to execute the task:\n");
    pAmphibious->Run();
    pAmphibious->Shoot();

    delete pNormalTank;
    delete pGanonTank;
    delete pAmphibious;
    return 0;
}
