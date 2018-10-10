#pragma once
#include "Context.h"
class Add : public Expression
{
public:
    Add(Expression *left, Expression *right) : m_left(left), m_right(right) {}
    virtual int interpret(Context *ctx) override
    {
        return m_left->interpret(ctx) + m_right->interpret(ctx);
    }

private:
    Expression *m_left, *m_right;
};