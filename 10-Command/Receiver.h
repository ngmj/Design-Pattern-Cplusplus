/*
* @Module: Receiver interface header.
* @Auther: ngmj
* @Create date: 2017.02.06
*/

#ifndef _RECEIVER_H_
#define _RECEIVER_H_

class Receiver
{
public:
    virtual ~Receiver(){}
    virtual void Action() = 0;
};

#endif
