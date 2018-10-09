#pragma once
#include "Hand.h"
class IStrategy
{
public:
    virtual ~IStrategy() {}
    virtual Hand nextHand() = 0;
    virtual void study(bool win) = 0;
};