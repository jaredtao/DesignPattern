#pragma once
#include "Display.h"
class CountDisplay : public Display
{
public:
    using Display::Display;
    void mulitDisplay(unsigned int count)
    {
        open();
        for (unsigned int i = 0; i < count; ++i)
        {
            print();
        }
        close();
    }
};