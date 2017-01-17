/*
* @Module: Facade.hpp.
* @Auther: ngmj
* @Create date: 2017.01.17
*/

#ifndef _FACADE_HPP_
#define _FACADE_HPP_

#include "SystemA.hpp"
#include "SystemB.hpp"
#include "SystemC.hpp"

class Facade
{
private:
    SystemA* m_systemA;
    SystemB* m_systemB;
    SystemC* m_systemC;
public:
    Facade()
    {
        m_systemA = new SystemA();
        m_systemB = new SystemB();
        m_systemC = new SystemC();
    }
    virtual ~Facade()
    {
        delete m_systemA;
        delete m_systemB;
        delete m_systemC;
    }
    virtual void WrapOperation()
    {
        m_systemA->Operation();
        m_systemB->Operation();
        m_systemC->Operation();
    }
};

#endif
