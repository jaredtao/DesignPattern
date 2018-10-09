#pragma once
#include <string>
class Printable
{
public:
    virtual ~Printable() {}
    virtual void setPrinterName(const std::string &name) = 0;
    virtual const std::string &getPrinterName() const = 0;
    virtual void print() = 0;
};