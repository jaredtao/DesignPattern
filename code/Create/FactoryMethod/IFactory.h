#pragma once
#include <string>
class IProduct;
class IFactory
{
public:
    virtual ~IFactory() {}
    virtual void registerProduct(IProduct *) = 0;
    virtual IProduct *createProduct(const std::string &owner) = 0;
    virtual IProduct *create(const std::string &owner) 
    {
        auto *pro = createProduct(owner);
        registerProduct(pro);
        return pro;
    }
};
