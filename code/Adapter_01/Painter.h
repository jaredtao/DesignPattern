#pragma once
class Painter
{
public:
    virtual ~Painter() {}
    virtual void printStrong() = 0;
    virtual void printWeak() = 0;
};