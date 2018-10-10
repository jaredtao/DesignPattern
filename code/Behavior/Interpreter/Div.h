#pragma once
#include "Context.h"
#include <cassert>
class Div : public Expression
{
public:
    Div(Expression *left, Expression *right) : m_left(left), m_right(right) {}
    virtual int interpret(Context *ctx) override
    {
        assert(m_right->interpret(ctx) != 0);
        return m_left->interpret(ctx) / m_right->interpret(ctx);
    }

private:
    Expression *m_left, *m_right;
};