#pragma once
#include "Entry.h"
#include <iostream>
class File : public Entry
{
public:
    File(const std::string &name, int size) : m_name(name), m_size(size) {}
    virtual std::string getName() const override
    {
        return m_name;
    }
    virtual int getSize() const override
    {
        return m_size;
    }

    virtual void printList(const std::string &str) override
    {
        std::cout << str << "/" << toString() << std::endl;
    }
    virtual void accept(Visitor *visitor) override 
    {
        visitor->visit(this);
    }
private:
    std::string m_name;
    int m_size;
};