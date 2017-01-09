/*
* @Module: AirCondition.hpp.
* @Auther: ngmj
* @Create date: 2017.01.09
*/

#ifndef _AIRCONDITION_HPP_
#define _AIRCONDITION_HPP_

#include <string>
#include <stdio.h>
#include "Product.h"

class AirCondition : public Product
{
    std::string engine;
    std::string shell;
    std::string compressor;
    // .....
public:
    virtual ~AirCondition(){}
    virtual int SetEngine(std::string _engine)
    {
        engine = _engine;
        return 0;
    }
    virtual int SetShell(std::string _shell)
    {
        shell = _shell;
        return 0;
    }
    virtual int SetCompressor(std::string _compressor)
    {
        compressor = _compressor;
        return 0 ;
    }
    virtual void Show()
    {
        printf("engine: %s,\tshell: %s,\tcompressor: %s\n", engine.c_str(),
                shell.c_str(), compressor.c_str());
    }
};

#endif
