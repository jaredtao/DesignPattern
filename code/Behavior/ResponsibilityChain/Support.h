#pragma once
#include "Trouble.h"
#include <iostream>
class Support
{
public:
    virtual ~Support() {}
    Support(const std::string &name) : m_name(name) {}
    Support *setNext(Support *next)
    {
        m_next = next;
        return next;
    }
    void support(Trouble *trouble)
    {
        if (resolve(trouble))
        {
            done(trouble);
        }
        else if (m_next)
        {
            m_next->support(trouble);
        }
        else
        {
            fail(trouble);
        }
    }
    std::string toString() const 
    {
        return "[" + m_name + "]";
    }
    virtual bool resolve(Trouble *trouble) = 0;
protected:
    void done(Trouble *trouble)
    {
        std::cout << trouble->toString() << " is solved by " << toString() << std::endl;
    }
    void fail(Trouble *trouble)
    {
        std::cout << trouble->toString() << " cannot be resolved." << std::endl;
    }
private:
    std::string m_name;
    Support *m_next = nullptr;
};