#pragma once
#include "Drawable.h"
#include "MacroCommand.h"
#include <iostream>
class DrawCanvas : public Drawable
{
public:
    DrawCanvas(MacroCommand *macroCommand) : m_macroCommand(macroCommand) {}
    virtual void draw(int x, int y) override
    {
        std::cout << __FUNCTION__ << " " << x << " " << y << std::endl;
    }
    void paint()
    {
        m_macroCommand->execute();
    }

private:
    MacroCommand *m_macroCommand;
};