/*
* @Module: main.cpp 
* @Auther: ngmj
* @Create date: 2017.01.05
*/


#include <stdio.h>
#include "State.h"
#include "Context.h"
#include "ReadHtState.h"
#include "SyncFrame.h"

int main(int argc, char* argv[])
{
    SyncFrame* pSync = new SyncFrame();
    Context* ctx = new Context();
    ReadHtState* pReadHtStat = new ReadHtState();

    pSync->Register(ReadHtState::GetStatId(), pReadHtStat);

    printf("process with no stat in context!\n");
    pSync->Process(ctx);

    ctx->AddStat(ReadHtState::GetStatId());
    printf("process with stat(s) in context!\n");
    pSync->Init(ctx->GetNextState());
    pSync->Process(ctx);

    delete pSync;
    delete pReadHtStat;
    delete ctx;
    return 0;
}
