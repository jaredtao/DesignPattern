#pragma once
#include "IItem.h"
#include "ILink.h"
#include "IPage.h"
#include "ITray.h"
#include <functional>
#include <unordered_map>
class IFactory
{
public:
    virtual ~IFactory() {}
    virtual ILink *createLink(const std::string &caption, const std::string &url) = 0;
    virtual ITray *createTray(const std::string &caption) = 0;
    virtual IPage *createPage(const std::string &title, const std::string &author) = 0;
};
class IFactoryHelper
{
public:
    static void registerFactory(const std::string &name, std::function<IFactory *()> createCallback)
    {
        s_createrMap.insert(std::make_pair(name, createCallback));
    }
    static IFactory *getFactory(const std::string &name)
    {
        auto itor = s_createrMap.find(name);
        return itor->second();
    }

private:
    static std::unordered_map<std::string, std::function<IFactory *()>> s_createrMap;
};
std::unordered_map<std::string, std::function<IFactory *()>> IFactoryHelper::s_createrMap;