#pragma once
#include "Printer.h"
class PrinterProxy : public Printable
{
public:
    PrinterProxy(const std::string &name) : m_name(name) {}
    ~PrinterProxy()
    {
        delete m_printer;
    }
    virtual void setPrinterName(const std::string &name) override
    {
        if (m_printer != nullptr)
        {
            m_printer->setPrinterName(name);
        }
        m_name = name;
    }
    virtual const std::string &getPrinterName() const override
    {
        return m_name;
    }
    void print() override
    {
        if (nullptr == m_printer)
        {
            m_printer = new Printer(m_name);
        }
        m_printer->print();
    }

private:
    Printer *m_printer = nullptr;
    std::string m_name;
};