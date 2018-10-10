#pragma once
class Context;
#include "Expression.h"
class Variable : public Expression
{
public:
    virtual int interpret(Context *ctx) override;
};