#pragma once
#include "Border.h"
class SideBorder : public Border
{
public:
    SideBorder(IDisplay *display, const char &borderChar) : Border(display), m_borderChar(borderChar) {}
    virtual int getRows() const override
    {
        return m_display->getRows();
    }
    virtual int getColumns() const override
    {
        return 1 + m_display->getColumns() + 1;
    }
    virtual std::string getRow(int index) const override
    {
        return m_borderChar + m_display->getRow(index) + m_borderChar;
    }

private:
    char m_borderChar;
};