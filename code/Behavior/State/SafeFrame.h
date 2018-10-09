#pragma once
#include "IContext.h"
#include "IState.h"
class SafeFrame : public IContext
{
public:
    SafeFrame();
    virtual void setClock(int hour) override;
    virtual void doAction(ActionType actionType) override;
    virtual void stateChange(IState *state) override;
    virtual void callSecurityCenter(const std::string &msg) override;
    virtual void recoderLog(const std::string &msg) override;

private:
    IState *m_state;
};