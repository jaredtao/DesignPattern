#pragma once
#include <string>
class IState;
class IContext
{
public:
    enum class ActionType
    {
        Use,
        Alarm,
        Phone
    };
    virtual ~IContext() {}
    virtual void doAction(ActionType actionType) = 0;
    virtual void setClock(int hour) = 0;
    virtual void stateChange(IState *state) = 0;
    virtual void callSecurityCenter(const std::string &msg) = 0;
    virtual void recoderLog(const std::string &msg) = 0;
};