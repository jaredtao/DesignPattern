#pragma once
#include <string>
class IColleague;
class IMediator
{
public:
    virtual ~IMediator() {}
    virtual void oper(int id, const std::string &msg) = 0;
    virtual void registerColleague(int id, IColleague *) = 0;
};