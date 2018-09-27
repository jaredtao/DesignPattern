#pragma once
#include "IDisplayImpl.h"
class Display
{
public:
    virtual ~Display() {}
    Display(IDisplayImpl *impl) : m_pImpl(impl) {}
    virtual void open()
    {
        m_pImpl->rawOpen();
    }
    virtual void print()
    {
        m_pImpl->rawPrint();
    }
    virtual void close()
    {
        m_pImpl->rawClose();
    }
    void display()
    {
        open();
        print();
        close();
    }

private:
    IDisplayImpl *m_pImpl;
};