/*
* @Module: main.cpp 
* @Auther: ngmj
* @Create date: 2017.01.10
*/

#include "Target.h"
#include "ClassAdapter.hpp"
#include "ObjectAdapter.hpp"
#include "Adaptee.hpp"

int main(int argc, char* argv[])
{
    // class Adapter
    Target* pct = new ClassAdapter();
    pct->Request();

    // Object Adapter
    Adaptee* pa = new Adaptee();
    Target* pot = new ObjectAdapter(pa);
    pot->Request();

    delete pct;
    delete pot;
    delete pa;
    return 0;
}
