/*
* @Module: main.cpp 
* @Auther: ngmj
* @Create date: 2017.01.05
*/

#include "State.h"
#include "Context.h"
#include "ConcreteStateA.h"
#include "ConcreteStateB.h"

int main(int argc, char* argv[])
{
    Context* pCtx = new Context(ConcreteStateA::Instance());

    pCtx->Request();
    pCtx->Request();
    pCtx->Request();
    pCtx->Request();

    delete pCtx;
    return 0;
}
