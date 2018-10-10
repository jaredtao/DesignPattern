#pragma once
class Context;
class Expression
{
public:
    virtual ~Expression() {}
    virtual int interpret(Context *ctx) = 0;
};