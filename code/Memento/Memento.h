#pragma once
#include <string>
#include <vector>
class Memento
{
public:
    Memento(int money) : m_money(money) {}
    int getMoney() const
    {
        return m_money;
    }
    const std::vector<std::string> &getFruits() const
    {
        return m_fruits;
    }
    void addFruit(const std::string &fruit)
    {
        m_fruits.push_back(fruit);
    }

private:
    int m_money;
    std::vector<std::string> m_fruits;
};