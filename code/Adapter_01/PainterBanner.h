#pragma once
#include "Banner.h"
#include "Painter.h"
class PainterBanner : public Banner, public Painter
{
public:
    PainterBanner(const std::string &str) : Banner(str) {}
    virtual void printStrong() override
    {
        showWithParen();
    }
    virtual void printWeak() override
    {
        showWithAster();
    }
};