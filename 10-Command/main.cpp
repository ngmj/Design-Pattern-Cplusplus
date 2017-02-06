/*
* @Module: main.cpp 
* @Auther: ngmj
* @Create date: 2017.02.06
*/

#include "Invoker.hpp"
#include "Receiver.h"
#include "ConcreteReceiver.hpp"
#include "Command.h"
#include "ConcreteCommand.hpp"

int main(int argc, char* argv[])
{
    Receiver* rec = new ConcreteReceiver();
    Command* cmd = new ConcreteCommand(rec);
    Invoker* inv = new Invoker(cmd);
    inv->Call();

    delete rec;
    delete cmd;
    delete inv;
    return 0;
}
