/*
* @Module: SongCharacterFactory.hpp.
* @Auther: ngmj
* @Create date: 2017.01.19
*/

#ifndef _SONG_CHARACTER_FACTORY_HPP_
#define _REGULAR_CHARACTER_FACTORY_HPP_

#include "Character.h"
#include "SongCharacter.hpp"
#include <stdio.h>
#include <map>
#include <utility>

class SongCharacterFactory
{
protected:
    std::map<char, Character*> characterStorage;
public:
    virtual ~SongCharacterFactory()
    {
        std::map<char, Character*>::const_iterator citCharacter;
        for (citCharacter = characterStorage.begin(); citCharacter != characterStorage.end(); citCharacter++)
        {
            if (citCharacter->second)
            {
                delete citCharacter->second;
            }
        }
    }
    Character* GetCharacter(char _c)
    {
        std::map<char, Character*>::iterator itCharacter = characterStorage.find(_c);
        if (characterStorage.end() != itCharacter)
        {
            return itCharacter->second;
        }
        Character* cTmp = new SongCharacter(_c);
        characterStorage.insert(std::make_pair(_c, cTmp));
        return cTmp;
    }
};

#endif
