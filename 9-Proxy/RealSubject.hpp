/*
* @Module: RealSubject.hpp. 
* @Auther: ngmj
* @Create date: 2017.01.22
*/

#ifndef _REAL_SUBJECT_HPP_
#define _REAL_SUBJECT_HPP_

#include <stdio.h>
#include "AbstractSubject.h"

class RealSubject : public AbstractSubject
{
public:
    RealSubject()
    {}
    virtual ~RealSubject(){}
    virtual void Request()
    {
        printf("RealSubject::Request()\n");
    }
};

#endif
