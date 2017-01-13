/*
* @Module: Tank interface header.
* @Auther: ngmj
* @Create date: 2017.01.12
*/

#ifndef _TANK_H_
#define _TANK_H_

class Tank
{
protected:
    unsigned int speed;
    unsigned int firepower;
public:
    Tank(unsigned int _s = 0, unsigned int _f = 0)
        : speed(_s)
        , firepower(_f)
    {}
    virtual ~Tank(){}
    virtual void AddSpeed(unsigned int _s = 0)
    {
        speed += _s;
    }
    virtual void AddFirepower(unsigned int _f = 0)
    {
        firepower += _f;
    }
    virtual void Run() = 0;
    virtual void Shoot() = 0;
};

#endif
