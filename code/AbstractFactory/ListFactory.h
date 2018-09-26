#pragma once
#include "IFactory.h"
#include "ListLink.h"
#include "ListPage.h"
#include "ListTray.h"
class ListFactory : public IFactory
{
public:
    ILink *createLink(const std::string &caption, const std::string &url) override
    {
        return new ListLink(caption, url);
    }
    ITray *createTray(const std::string &caption) override
    {
        return new ListTray(caption);
    }
    IPage *createPage(const std::string &title, const std::string &author) override
    {
        return new ListPage(title, author);
    }
};

static int ListFactoryInit = []() -> int {
    std::cout << "1" << std::endl;
    IFactoryHelper::registerFactory("ListFactory", []() { return new ListFactory; });
    return 0;
}();