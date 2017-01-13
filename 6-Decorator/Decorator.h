/*
* @Module: Decorator interface header.
* @Auther: ngmj
* @Create date: 2017.01.12
*/

#ifndef _DECORATOR_H_
#define _DECORATOR_H_

class Decorator : public Tank
{
protected:
    Tank* pt;
public:
    Decorator(Tank* _pt)
        : pt(_pt)
    {}
    virtual ~Decorator(){}
    virtual void AddSpeed(unsigned int _s = 0)
    {
        pt->AddSpeed(_s);
    }
    virtual void AddFirpower(unsigned int _f = 0)
    {
        pt->AddFirepower(_f);
    }
};

#endif
