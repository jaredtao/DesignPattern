#pragma once
#include "IContext.h"
#include "IState.h"
class DayState : public IState
{
public:
    static DayState &GetInstance()
    {
        static DayState s;
        return s;
    }
    virtual void doColock(IContext *ctx, int hour) override;
    virtual void doUse(IContext *ctx) override
    {
        ctx->recoderLog("Day use ");
    }
    virtual void doAlarm(IContext *ctx) override
    {
        ctx->callSecurityCenter("Day alarm");
    }
    virtual void doPhone(IContext *ctx) override
    {
        ctx->callSecurityCenter("Day phone");
    }

    ~DayState() = default;

    DayState(const DayState &) = delete;
    DayState(DayState &&) = delete;
    DayState &operator=(const DayState &) = delete;
    DayState &operator=(DayState &&) = delete;

protected:
    DayState() {}
};