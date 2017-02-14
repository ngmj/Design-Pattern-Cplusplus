/*
* @Module: main.cpp 
* @Auther: ngmj
* @Create date: 2017.02.14
*/

#include "Colleague.h"
#include "ConcreteColleagueA.hpp"
#include "ConcreteColleagueB.hpp"
#include "Mediator.h"
#include "ConcreteMediator.hpp"

int main(int argc, char* argv[])
{
    Colleague *pColleagueA = new ConcreteColleagueA();
    Colleague *pColleagueB = new ConcreteColleagueB();
    Mediator *pMediator = new ConcreteMediator();

    pMediator->Register(1, pColleagueA);
    pMediator->Register(2, pColleagueB);

    pColleagueA->SendMsg(2, "Hello");
    pColleagueB->SendMsg(1, "World");

    delete pColleagueA;
    delete pColleagueB;
    delete pMediator;

    return 0;
}
