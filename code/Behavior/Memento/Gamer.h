#pragma once
#include "Memento.h"
#include <iostream>
#include <random>
class Gamer
{
public:
    Gamer(int money) : m_money(money) {}

    int getMoney() const
    {
        return m_money;
    }

    void bet()
    {
        int dice = m_dis(m_gen) + 1;
        if (dice == 1)
        {
            m_money += 100;
            std::cout << "money add" << std::endl;
        }
        else if (dice == 2)
        {
            m_money /= 2;
            std::cout << "money dec" << std::endl;
        }
        else if (dice == 6)
        {
            auto f = getFruit();
            m_fruits.push_back(f);
            std::cout << "get fruit " << f << std::endl;
        }
    }
    std::string getFruit()
    {
        return s_fruitNames[m_dis(m_gen) % 4];
    }
    std::string toString()
    {
        std::string str;
        str = "[money = " + std::to_string(m_money) + ", fruits = ";
        for (auto f : m_fruits)
        {
            str += f + " ";
        }
        str += " ]";
        return str;
    }
    Memento createMemento()
    {
        Memento m(m_money);
        for (auto f : m_fruits)
        {
            m.addFruit(f);
        }
        return m;
    }
    void restoreMemento(const Memento &m)
    {
        m_money = m.getMoney();
        m_fruits = m.getFruits();
    }

private:
    int m_money;
    std::vector<std::string> m_fruits;

    std::random_device m_rd;
    std::mt19937 m_gen{ m_rd() };
    std::uniform_int_distribution<int> m_dis{ 0, 6 };

    std::string s_fruitNames[4] = { { "apple" }, { "grape" }, { "orange" }, { "banana" } };
};