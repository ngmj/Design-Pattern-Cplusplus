#include "Context.h"

Context::Context(State* stat)
    : m_stat(stat)
{
}

Context::~Context()
{
}

int Context::ChangeState(State* stat)
{
    m_stat = stat;
    return 0;
}

void Context::Request() 
{
    m_stat->Handle(this);
}

