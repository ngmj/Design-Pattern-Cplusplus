/*
* @Module: Computer interface header.
* @Auther: ngmj
* @Create date: 2017.01.11
*/

#ifndef _COMPUTER_H_
#define _COMPUTER_H_

#include "Os.h"

class Computer
{
protected:
   Os* pos; 
public:
    Computer(Os* _pos) : pos(_pos) {}
    virtual ~Computer(){}
    virtual void InstallOs() = 0;
};

#endif
