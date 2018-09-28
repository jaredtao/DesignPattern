#pragma once

class Hand
{
public:
    enum class HandFlags
    {
        Rock = 0,
        Scissors = 1,
        Paper = 2
    };
    Hand(HandFlags hand) : m_hand(hand) {}
    void setHand(HandFlags hand)
    {
        m_hand = hand;
    }
    HandFlags getHand() const
    {
        return m_hand;
    }
    bool operator==(const Hand &other)
    {
        return other.m_hand == m_hand;
    }
    bool operator>(const Hand &other)
    {
        return (static_cast<int>(m_hand) + 1) % 3 == static_cast<int>(other.m_hand);
    }
    // template <HandFlags handFlag>
    // static Hand &GetInstance()
    // {
    //     static Hand hand(handFlag);
    //     return hand;
    // }

protected:
private:
    HandFlags m_hand;
};
