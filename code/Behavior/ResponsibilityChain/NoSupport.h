#pragma once
#include "Support.h"
class NoSupport : public Support 
{
public:
    using Support::Support;
    virtual bool resolve(Trouble *trouble) override 
    {
        return false;
    }

};