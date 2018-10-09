#pragma once
#include "Banner.h"
#include "Painter.h"
class PainterBanner : public Painter
{
public:
    PainterBanner(const std::string &str) : m_banner(str) {}
    virtual void printStrong() override
    {
        m_banner.showWithParen();
    }
    virtual void printWeak() override
    {
        m_banner.showWithAster();
    }
private:
    Banner m_banner;
};