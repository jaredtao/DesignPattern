#pragma once
#include "IPage.h"
class ListPage : public IPage
{
public:
    using IPage::IPage;
    std::string makeHTML() override
    {
        std::string str;
        str.append("<html><head><title>" + m_title + "</head></title>\n");
        str.append("<body>\n");
        str.append("<h1>" + m_title + "</h1>\n");
        str.append("<ul>\n");

        for (auto item : m_itemList)
        {
            str.append(item->makeHTML());
        }
        str.append("</ul>\n");
        str.append("<address>" + m_author + "</address>\n");
        str.append("</body>\n");
        str.append("</html>");
        return str;
    }
};