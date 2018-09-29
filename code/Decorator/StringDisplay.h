#pragma once
#include "IDisplay.h"
class StringDisplay : public IDisplay
{
public:
    StringDisplay(const std::string &str) : m_str(str) {}
    virtual int getRows() const override
    {
        return 1;
    }
    virtual int getColumns() const override
    {
        return static_cast<int>(m_str.length());
    }
    virtual std::string getRow(int index) const override
    {
        if (index == 0)
        {
            return m_str;
        }
        else
        {
            return {};
        }
    }

private:
    std::string m_str;
};