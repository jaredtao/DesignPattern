#pragma once
#include "IItem.h"
class ILink : public IItem
{
public:
    virtual ~ILink() {}
    ILink(const std::string &caption, const std::string &url) : IItem(caption), m_url(url) {}

protected:
    std::string m_url;
};