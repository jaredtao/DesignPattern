#pragma once
#include "Border.h"
class FullBorder : public Border
{
public:
    FullBorder(IDisplay *display) : Border(display) {}
    virtual int getRows() const override
    {
        return 1 + m_display->getRows() + 1;
    }
    virtual int getColumns() const override
    {
        return 1 + m_display->getColumns() + 1;
    }
    virtual std::string getRow(int index) const override
    {
        if (index == 0)
        {
            return "+" + makeLine('-', m_display->getColumns()) + "+";
        }
        else if (index == m_display->getRows() + 1)
        {
            return "+" + makeLine('-', m_display->getColumns()) + "+";
        }
        else
        {
            return "|" + m_display->getRow(index - 1) + "|";
        }
    }

private:
    std::string makeLine(char ch, int count) const
    {
        std::string str;
        str.resize(count, ch);
        return str;
    }
};