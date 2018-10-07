#pragma once
#include <string>
class IMediator;
class IColleague
{
public:
    virtual ~IColleague() {}
    virtual void receivedMsg(const std::string &msg) = 0;
    virtual void sendMsg(int id, const std::string &msg) = 0;
    virtual void setMediator(IMediator *mediator) = 0;
};