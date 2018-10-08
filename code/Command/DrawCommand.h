#pragma once
#include "Drawable.h"
#include "ICommand.h"
class DrawCommand : public ICommand
{
public:
    DrawCommand(int x, int y, Drawable *drawable) : m_x(x), m_y(y), m_drawable(drawable) {}
    virtual void execute() override
    {
        m_drawable->draw(m_x, m_y);
    }

private:
    int m_x;
    int m_y;
    Drawable *m_drawable;
};