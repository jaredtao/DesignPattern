#pragma once
#include "IProduct.h"
#include <iostream>
class MessageBox : public IProduct
{
public:
    MessageBox(const std::string &str) : m_name(str) {}
    IProduct *Clone() override
    {
        return new MessageBox(m_name);
    }
    void Use(const std::string &str)
    {
        std::cout << "Message box " << m_name << " " << str << std::endl;
    }

private:
    std::string m_name;
};