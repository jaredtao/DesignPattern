#pragma once
#include "Database.h"
#include "HtmlWriter.h"
#include <iostream>
class PageMaker
{
public:
    ~PageMaker() = default;
    PageMaker(const PageMaker &) = delete;
    PageMaker(PageMaker &&) = delete;
    PageMaker &operator=(const PageMaker &) = delete;
    PageMaker &operator=(PageMaker &&) = delete;
    static PageMaker &GetInstance()
    {
        static PageMaker pm;
        return pm;
    }
    void makeWelcomePage(const std::string &mailAddr)
    {
        auto name = DataBase::GetInstance().getNameByEmail(mailAddr);
        HtmlWriter writer;
        writer.title("Welcome to " + name + "'s page!");
        writer.paragraph(name + u8"欢迎来到" + name + u8"的主页.");
        writer.paragraph(u8"等着你的邮件哦！");
        writer.mailto(mailAddr, name);
        writer.close();
        std::cout << writer.toString() << std::endl;
    }

protected:
    PageMaker() {}

private:
};