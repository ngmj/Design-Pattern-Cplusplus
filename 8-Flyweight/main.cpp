/*
* @Module: main.cpp 
* @Auther: ngmj
* @Create date: 2017.01.19
*/

#include "Character.h"
#include "RegularCharacter.hpp"
#include "RegularCharacterFactory.hpp"
#include "SongCharacterFactory.hpp"

int main(int argc, char* argv[])
{
    RegularCharacterFactory* pRCF = new RegularCharacterFactory();
    SongCharacterFactory* pSCF = new SongCharacterFactory();

    Character* pRCharA = pRCF->GetCharacter('a');
    pRCharA->Display(1, 1, 2, 3, 10);

    Character* pSCharA = pSCF->GetCharacter('a');
    pSCharA->Display(1, 1, 2, 3, 10);

    delete pRCF;
    delete pSCF; 
    return 0;
}
