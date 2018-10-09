#include "IFactory.h"
#include "ListFactory.h"
#include <cassert>
#include <iostream>
#include <memory>
#include <string>
int main()
{
    std::shared_ptr<IFactory> factory(IFactoryHelper::getFactory("ListFactory"));
    assert(factory != nullptr);
    std::shared_ptr<ILink> people(factory->createLink(u8"人民日报", u8"http://www.people.com.cn/"));
    std::shared_ptr<ILink> gmw(factory->createLink(u8"光明网", u8"http://www.gmw.cn/"));
    std::shared_ptr<ILink> us_yahoo(factory->createLink(u8"us_yahoo", u8"http://www.yahoo.com/"));
    std::shared_ptr<ILink> jp_yahoo(factory->createLink(u8"jp_yahoo", u8"http://www.yahoo.com.jp/"));
    std::shared_ptr<ILink> google(factory->createLink(u8"google", u8"http://www.google.com"));

    std::shared_ptr<ITray> trayNews(factory->createTray("news"));
    trayNews->addItem(people.get());
    trayNews->addItem(gmw.get());

    std::shared_ptr<ITray> trayYahoo(factory->createTray("yahoo!"));
    trayYahoo->addItem(us_yahoo.get());
    trayYahoo->addItem(jp_yahoo.get());

    std::shared_ptr<ITray> traySearch(factory->createTray("traySearch"));
    trayYahoo->addItem(trayYahoo.get());
    trayYahoo->addItem(google.get());

    std::shared_ptr<IPage> page(factory->createPage("LinkPage", "tao"));
    page->addItem(trayNews.get());
    page->addItem(traySearch.get());
    page->output();

    return 0;
}
