#pragma once
#include "Expression.h"
class Constant : public Expression
{
public:
    Constant(int value) : m_value(value) {}
    virtual int interpret(Context *ctx) override
    {
        return m_value;
    }

private:
    int m_value;
};