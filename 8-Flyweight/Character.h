/*
* @Module: Character interface header.
* @Auther: ngmj
* @Create date: 2017.01.19
*/

#ifndef _CHARACTER_H_
#define _CHARACTER_H_

class Character
{
protected:
    // intrinsicState
    char c;
public:
    Character(char _c) 
        : c(_c)
    {}
    virtual ~Character(){}
    // get intrinsicState
    virtual char GetSymbol() = 0;
    // set extrinsicState and display
    virtual void Display(int width, int height, int ascent, int descent, int pointSize) = 0;
};

#endif
