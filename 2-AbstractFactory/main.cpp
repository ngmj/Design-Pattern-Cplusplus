/*
* @Module: main.cpp 
* @Auther: ngmj
* @Create date: 2017.01.05
*/

#include "GreeFactory.hpp"
#include "HaierFactory.hpp"
#include "AirCondition.h"
#include "Refrigerator.h"

int main(int argc, char* argv[])
{
    GreeFactory greeFactory;
    HaierFactory haierFactory;
    Refrigerator* pRf = haierFactory.createFridge();
    AirCondition* pAc = haierFactory.createAirCondition(); 
    //AirCondition* pAc = greeFactory.createFridge();
    //AirCondition* pAc = greeFactory.createAirCondition();


    // to open
    pRf->Open();
    pAc->Open();

    // to cloase
    pRf->Close();
    pAc->Close();
}
