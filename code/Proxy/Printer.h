#pragma once
#include "Printable.h"
#include <chrono>
#include <iostream>
#include <thread>
class Printer : public Printable
{
public:
    Printer(const std::string &name) : m_name(name)
    {
        heavyJob();
    }
    virtual void setPrinterName(const std::string &name) override
    {
        m_name = name;
    }
    virtual const std::string &getPrinterName() const
    {
        return m_name;
    }
    void print() override
    {
        std::cout << __FUNCTION__ << getPrinterName() << std::endl;
    }

private:
    void heavyJob()
    {
        std::cout << __FUNCTION__ << " start " << std::endl;
        for (int i = 0; i < 5; ++i)
        {
            std::this_thread::sleep_for(std::chrono::milliseconds(300));
        }
        std::cout << __FUNCTION__ << " end " << std::endl;
    }

private:
    std::string m_name;
};