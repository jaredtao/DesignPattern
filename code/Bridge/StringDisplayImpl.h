#pragma once
#include "IDisplayImpl.h"
#include <iostream>
#include <string>
using std::cout;
using std::endl;
class StringDisplayImpl : public IDisplayImpl
{
public:
    StringDisplayImpl(const std::string &str) : m_str(str) {}
    virtual void rawOpen() override
    {
        printLine();
    }
    virtual void rawPrint() override
    {
        cout << "|" << m_str << "|" << std::endl;
    }
    virtual void rawClose() override
    {
        printLine();
    }

private:
    void printLine()
    {
        cout << "+";
        for (int i = 0; i < m_str.length(); ++i)
        {
            cout << "-";
        }
        cout << "+" << endl;
    }

private:
    std::string m_str;
};