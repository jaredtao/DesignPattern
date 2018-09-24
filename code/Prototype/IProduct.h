#pragma once
#include <string>
class IProduct
{
public:
    virtual ~IProduct() {}
    virtual IProduct *Clone() = 0;
    virtual void Use(const std::string &str) = 0;
};