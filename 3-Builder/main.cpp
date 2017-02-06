/*
* @Module: main.cpp 
* @Auther: ngmj
* @Create date: 2017.01.05
*/

#include "Product.h"
#include "Builder.h"
#include "AirConditionBuilder.hpp"
#include "Director.hpp"

int main(int argc, char* argv[])
{
    Builder* pbuilder = new AirConditionBuilder();
    Director director;
    director.SetBuilder(pbuilder);
    Product* pproduct = director.Construct();
    pproduct->Show();

    delete pbuilder;
    delete pproduct;
    return 0;
}
