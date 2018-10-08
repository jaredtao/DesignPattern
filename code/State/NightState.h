#pragma once
#include "IContext.h"
#include "IState.h"
class NightState : public IState
{
public:
    static NightState &GetInstance()
    {
        static NightState s;
        return s;
    }
    virtual void doColock(IContext *ctx, int hour) override;
    virtual void doUse(IContext *ctx) override
    {
        ctx->callSecurityCenter("Night use ");
    }
    virtual void doAlarm(IContext *ctx) override
    {
        ctx->callSecurityCenter("Night alarm");
    }
    virtual void doPhone(IContext *ctx) override
    {
        ctx->recoderLog("Night phone");
    }

    ~NightState() = default;

    NightState(const NightState &) = delete;
    NightState(NightState &&) = delete;
    NightState &operator=(const NightState &) = delete;
    NightState &operator=(NightState &&) = delete;

protected:
    NightState() {}
};