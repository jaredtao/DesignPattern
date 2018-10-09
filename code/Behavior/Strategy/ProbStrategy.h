#pragma once
#include "IStrategy.h"
#include <random>
class ProbStrategy : public IStrategy
{
public:
    ProbStrategy() : m_gen(m_rd()), m_dis(0, 2) {}
    virtual Hand nextHand() override
    {
        int bet = getRandom(getSum(m_currentValue));
        int handValue = 0;
        if (bet < m_history[m_currentValue][0])
        {
            handValue = 0;
        }
        else if (bet < m_history[m_currentValue][0] + m_history[m_currentValue][1])
        {
            handValue = 1;
        }
        else
        {
            handValue = 2;
        }
        m_preValue = m_currentValue;
        m_currentValue = handValue;
        return Hand(static_cast<Hand::HandFlags>(handValue));
    }
    virtual void study(bool win) override
    {
        if (win)
        {
            m_history[m_preValue][m_currentValue]++;
        }
        else
        {
            m_history[m_preValue][(m_currentValue + 1) % 3]++;
            m_history[m_preValue][(m_currentValue + 2) % 3]++;
        }
        // m_history[static_cast<int>(m_preHand.getHand())]
    }

protected:
    int getSum(int handValue)
    {
        int sum = 0;
        for (int i = 0; i < 3; ++i)
        {
            sum += m_history[handValue][i];
        }
        return sum;
    }
    int getRandom(int v)
    {
        m_dis = std::uniform_int_distribution<int>(0, v);
        return m_dis(m_gen);
    }

protected:
    std::random_device m_rd;
    std::mt19937 m_gen;
    std::uniform_int_distribution<int> m_dis;

    int m_currentValue = 0;
    int m_preValue = 0;
    int m_history[3][3] = { { 1, 1, 1 }, { 1, 1, 1 }, { 1, 1, 1 } };
};
