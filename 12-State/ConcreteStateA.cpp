#include "ConcreteStateA.h"

State* ConcreteStateA::m_stat = NULL;

State* ConcreteStateA::Instance()
{
    if (NULL == m_stat)
    {
        m_stat = new ConcreteStateA();  
    }
    return m_stat;
}

ConcreteStateA::~ConcreteStateA()
{
}

void ConcreteStateA::Handle(Context* ctx)
{
    printf("Handle ConcreteStateA\n");
    ctx->ChangeState(ConcreteStateB::Instance());
}

