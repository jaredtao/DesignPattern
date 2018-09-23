#pragma once
class IProduct
{
public:
    virtual ~IProduct() {}

    virtual void use() = 0;
};
