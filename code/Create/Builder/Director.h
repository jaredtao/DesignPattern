#pragma once
#include "IBuilder.h"
class Director
{
public:
    Director(IBuilder *builder) : m_builder(builder) {}
    void construct()
    {
        m_builder->makeTitle("Greeting");
        m_builder->makeString(u8"从早上到下午");
        m_builder->makeItems(std::vector<std::string>{ u8"早上好", u8"下午好" });
        m_builder->makeString(u8"晚上");
        m_builder->makeItems(std::vector<std::string>{ u8"晚上好", u8"晚安", u8"再见" });
        m_builder->close();
    }

private:
    IBuilder *m_builder;
};