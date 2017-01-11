/*
* @Module: WindowOs.hpp.
* @Auther: ngmj
* @Create date: 2017.01.11
*/

#ifndef _WINDOW_OS_H_
#define _WINDOW_OS_H_

#include "Os.h"
#include <unistd.h>
#include <stdio.h>

class WindowOs : public Os
{
public:
    virtual ~WindowOs(){}
    virtual void Install()
    {
        printf("Install WindowOs start...\n");
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
