
#include <stdio.h>
#include "ReadHtState.h"

using namespace std;

ReadHtState::ReadHtState()
{
}

ReadHtState::~ReadHtState()
{
}

int ReadHtState::HandleEncode(Context* ctx, std::string& reqStr)
{
    reqStr = "ReadHtState";
    return 0;
}

int ReadHtState::HandleProcess(Context* ctx, std::string& rspStr) 
{
    printf("recv msg: %s\n", rspStr.c_str());
    return ctx->GetNextState();
}

int ReadHtState::GetStatId()
{
    return 1;
}
