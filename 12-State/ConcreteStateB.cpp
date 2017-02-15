#include "ConcreteStateB.h"

State* ConcreteStateB::m_stat = NULL;

State* ConcreteStateB::Instance()
{
    if (NULL == m_stat)
    {
        m_stat = new ConcreteStateB();  
    }
    return m_stat;
}

ConcreteStateB::~ConcreteStateB()
{
}

void ConcreteStateB::Handle(Context* ctx)
{
    printf("Handle ConcreteStateB\n");
    ctx->ChangeState(ConcreteStateA::Instance());
}

