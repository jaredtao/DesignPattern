#pragma once
#include <string>
class IItem
{
public:
    virtual ~IItem() {}
    IItem(const std::string &caption) : m_caption(caption) {}
    virtual std::string makeHTML() = 0;

protected:
    std::string m_caption;
};