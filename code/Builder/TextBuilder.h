#pragma once
#include "IBuilder.h"
class TextBuilder : public IBuilder
{
public:
    void makeTitle(const std::string &title) override
    {
        m_str.append("============================\n");
        m_str.append("[" + title + "]\n");
        m_str.append("\n");
    }
    void makeString(const std::string &str) override
    {
        m_str.append(" * " + str + "\n");
        m_str.append("\n");
    }
    void makeItems(const std::vector<std::string> &items) override
    {
        for (auto item : items)
        {
            m_str.append(" .  " + item + "\n");
        }
        m_str.append("\n");
    }
    void close() override
    {
        m_str.append("============================\n");
    }
    std::string getResult() const
    {
        return m_str;
    }

private:
    std::string m_str;
};