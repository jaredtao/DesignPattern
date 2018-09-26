#pragma once
#include "IItem.h"
#include <vector>
class ITray : public IItem
{
public:
    virtual ~ITray() {}
    ITray(const std::string &caption) : IItem(caption) {}
    void addItem(IItem *item)
    {
        m_itemList.push_back(item);
    }

protected:
    std::vector<IItem *> m_itemList;
};