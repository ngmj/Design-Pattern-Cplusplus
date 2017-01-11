/*
* @Module: AppleOs.hpp.
* @Auther: ngmj
* @Create date: 2017.01.11
*/

#ifndef _APPLE_OS_H_
#define _APPLE_OS_H_

#include "Os.h"
#include <unistd.h>
#include <stdio.h>

class AppleOs : public Os
{
public:
    virtual ~AppleOs(){}
    virtual void Install()
    {
        printf("Install AppleOs start...\n");
        size_t i = 4;
        while (i--)
        {
            printf(".");
            fflush(stdout);
            sleep(1);
        }
        printf("\nInstall success\n");
    }
};

#endif
