#pragma once
#include "IStrategy.h"
#include <sstream>
#include <string>
class Player
{
public:
    Player(const std::string &name, IStrategy *strategy) : m_strategy(strategy), m_name(name) {}
    Hand nextHand()
    {
        return m_strategy->nextHand();
    }
    void win()
    {
        m_strategy->study(true);
        m_gameCount++;
        m_winCount++;
    }
    void lose()
    {
        m_strategy->study(false);
        m_gameCount++;
        m_loseCount++;
    }
    void even()
    {
        m_gameCount++;
    }
    std::string getString() const
    {
        std::stringstream ss;
        ss << "Player: " << m_name << " gameCount:" << m_gameCount << " win:" << m_winCount << " lose:" << m_loseCount << " even:" << m_gameCount - m_loseCount - m_winCount;
        return ss.str();
    }

private:
    IStrategy *m_strategy;
    std::string m_name;
    int m_gameCount = 0;
    int m_winCount = 0;
    int m_loseCount = 0;
};