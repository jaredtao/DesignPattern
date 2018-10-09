#pragma once
#include "IColleague.h"
#include "IMediator.h"
#include <unordered_map>
class CMediator : public IMediator
{
public:
    virtual void oper(int id, const std::string &msg) override
    {
        auto it = m_map.find(id);
        if (it != m_map.end())
        {
            it->second->receivedMsg(msg);
        }
    }
    virtual void registerColleague(int id, IColleague *colleague) override
    {
        auto it = m_map.find(id);
        if (it == m_map.end())
        {
            m_map.insert(std::make_pair(id, colleague));
            colleague->setMediator(this);
        }
    }

private:
    std::unordered_map<int, IColleague *> m_map;
};