#pragma once
class Drawable
{
public:
    virtual ~Drawable() {}
    virtual void draw(int x, int y) = 0;
};