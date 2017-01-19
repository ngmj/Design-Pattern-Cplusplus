/*
* @Module: RegularCharacter.hpp.
* @Auther: ngmj
* @Create date: 2017.01.19
*/

#ifndef _REGULAR_CHARACTER_HPP_
#define _REGULAR_CHARACTER_HPP_

#include <stdio.h>
#include <string>
#include "Character.h"

class RegularCharacter : public Character
{
protected:
    // intrinsicState
    std::string kindOfCharacter;
    // extrinsicState
    int width;
    int height;
    int ascent;
    int descent;
    int pointSize;
public:
    RegularCharacter(char _c)
        : Character(_c)
        , kindOfCharacter("RegularCharacter")
    {}
    virtual ~RegularCharacter(){}
    virtual char GetSymbol()
    {
        return c;
    }
    virtual void Display(int width, int height, int ascent, int descent, int pointSize) 
    {
        this->width = width;
        this->height = height;
        this->ascent = ascent;
        this->descent = descent;
        this->pointSize = pointSize;
        printf("%s: %c, width: %d, height: %d, ascent: %d, descent: %d, pointSize: %d\n",
                this->kindOfCharacter.c_str(), c, this->width, this->height, this->ascent, this->descent, this->pointSize);
    }
};

#endif
