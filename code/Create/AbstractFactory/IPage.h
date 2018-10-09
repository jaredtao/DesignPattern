#pragma once
#include "IItem.h"
#include <iostream>
#include <string>
#include <vector>
class IPage
{
public:
    virtual ~IPage() {}
    IPage(const std::string &title, const std::string &author) : m_title(title), m_author(author) {}
    void addItem(IItem *item)
    {
        m_itemList.push_back(item);
    }
    void output()
    {
        std::cout << makeHTML() << std::endl;
    }
    virtual std::string makeHTML() = 0;

protected:
    std::string m_title;
    std::string m_author;
    std::vector<IItem *> m_itemList;
};