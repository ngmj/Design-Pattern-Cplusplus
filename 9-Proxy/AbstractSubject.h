/*
* @Module: AbstractSubject interface header.
* @Auther: ngmj
* @Create date: 2017.01.22
*/

#ifndef _ABSTRACT_SUBJECT_H_
#define _ABSTRACT_SUBJECT_H_

class AbstractSubject
{
public:
    virtual ~AbstractSubject(){}
    virtual void Request() = 0;
};

#endif
