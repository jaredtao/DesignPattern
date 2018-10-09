#pragma once
#include <sstream>
#include <string>
class HtmlWriter
{
public:
    void title(const std::string &title)
    {
        m_ss << "<html>"
             << "<head>"
             << "<title>" + title + "</title>"
             << "</head>"
             << "<body>\n"
             << "<h1>" + title + "</h1>\n";
    }
    void paragraph(const std::string &msg)
    {
        m_ss << "<p>" + msg + "</p>\n";
    }
    void link(const std::string &herf, const std::string &caption)
    {
        paragraph("<a herf=\"" + herf + "\">" + caption + "</a>");
    }
    void mailto(const std::string &mailAddr, const std::string &userName)
    {
        link("mailto:" + mailAddr, userName);
    }
    void close()
    {
        m_ss << "</body>"
             << "</html>\n";
    }
    std::string toString() const
    {
        return m_ss.str();
    }

private:
    std::stringstream m_ss;
};