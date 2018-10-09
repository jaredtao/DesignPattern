#pragma once
#include "IColleague.h"
#include "IMediator.h"
#include <iostream>
class CColleague1 : public IColleague
{
public:
    virtual void receivedMsg(const std::string &msg) override
    {
        std::cout << __FUNCTION__ << " " << msg << std::endl;
    }
    virtual void sendMsg(int id, const std::string &msg) override
    {
        std::cout << __FUNCTION__ << id << " " << msg << std::endl;
        if (m_mediator)
        {
            m_mediator->oper(id, msg);
        }
    }
    virtual void setMediator(IMediator *mediator) override
    {
        m_mediator = mediator;
    }

private:
    IMediator *m_mediator = nullptr;
};