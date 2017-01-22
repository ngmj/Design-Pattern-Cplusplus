/*
* @Module: Proxy.hpp. 
* @Auther: ngmj
* @Create date: 2017.01.22
*/

#ifndef _PROXY_HPP_
#define _PROXY_HPP_

#include <stdio.h>
#include "AbstractSubject.h"
#include "RealSubject.hpp"

class Proxy : public AbstractSubject
{
    RealSubject* m_realSub;
public:
    Proxy()
    {
        m_realSub = new RealSubject();
    }
    virtual ~Proxy()
    {
        if (m_realSub)
        {
            delete m_realSub;
        }
    }
    virtual void PreRequest()
    {
        printf("Proxy::PreRequest()\n");
    }
    virtual void Request()
    {
        PreRequest();
        m_realSub->Request();
        PostPrequest();
    }
    virtual void PostPrequest()
    {
        printf("Proxy::PostPrequest()\n");
    }
};

#endif
