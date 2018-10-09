#pragma once
#include <iostream>
#include <string>
class Banner
{
public:
    Banner(const std::string &str) : m_str(str) {}
    void showWithParen()
    {
        std::cout << "(" << m_str << ")" << std::endl;
    }
    void showWithAster()
    {
        std::cout << "*" << m_str << "*" << std::endl;
    }

private:
    std::string m_str;
};