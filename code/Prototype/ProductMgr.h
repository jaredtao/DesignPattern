#pragma once
#include "IProduct.h"
#include <unordered_map>
class ProductMgr
{
public:
    void Register(const std::string &name, IProduct *pro)
    {
        m_map.insert({ name, pro });
    }
    IProduct *Create(const std::string &name)
    {
        auto it = m_map.find(name);
        if (it != m_map.end())
        {
            return it->second->Clone();
        }
        else
        {
            return nullptr;
        }
    }

private:
    std::unordered_map<std::string, IProduct *> m_map;
};