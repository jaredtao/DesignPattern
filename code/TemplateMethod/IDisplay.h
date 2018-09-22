#pragma once
class IDisplay
{
public:
    virtual ~IDisplay() {}
    virtual void open() = 0;
    virtual void close() = 0;
    virtual void print() = 0;
    void display () {
        open();
        print();
        close();
    }
};