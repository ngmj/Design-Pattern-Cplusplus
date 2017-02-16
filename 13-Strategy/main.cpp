/*
* @Module: main.cpp 
* @Auther: ngmj
* @Create date: 2017.02.16
*/

#include <stdio.h>
#include "Context.hpp"
#include "Strategy.h"
#include "AddStrategy.hpp"
#include "MinusStrategy.hpp"
#include "MultiplyStrategy.hpp"
#include "DivideStrategy.hpp"

int main(int argc, char* argv[])
{
    Context* pCtx = new Context();
    AddStrategy* pAddSt = new AddStrategy();
    MinusStrategy* pMinusSt = new MinusStrategy();
    MultiplyStrategy* pMultiplySt = new MultiplyStrategy();
    DivideStrategy* pDivideSt = new DivideStrategy();

    pCtx->SetStrategy(pAddSt);
    printf("result: %d\n", pCtx->Calculate(2, 2));

    pCtx->SetStrategy(pMinusSt);
    printf("result: %d\n", pCtx->Calculate(2, 2));

    pCtx->SetStrategy(pMultiplySt);
    printf("result: %d\n", pCtx->Calculate(2, 2));

    pCtx->SetStrategy(pDivideSt);
    printf("result: %d\n", pCtx->Calculate(2, 2));

    delete pCtx;
    delete pAddSt;
    delete pMinusSt;
    delete pMultiplySt;
    delete pDivideSt;
    return 0;
}
