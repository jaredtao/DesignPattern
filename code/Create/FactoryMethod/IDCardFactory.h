#pragma once
#include "IDCard.h"
#include "IFactory.h"
#include <string>
#include <vector>
class IDCareFactory : public IFactory
{
public:
    IProduct *createProduct(const std::string &owner)
    {
        return new IDCard(owner);
    }
    void registerProduct(IProduct *pro)
    {
        m_productList.push_back(pro);
    }

private:
    std::vector<IProduct *> m_productList;
};