#pragma once
#include "Support.h"
class SpecialSupport : public Support
{
public:
    SpecialSupport(const std::string &name, int num) : Support(name), m_num (num) {}
    
    virtual bool resolve(Trouble *trouble) override
    {
        if (trouble->getNumber() == m_num)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    private:
    int m_num;
};