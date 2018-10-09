#pragma once
class IContext;
class IState
{
public:
    virtual ~IState() {}
    virtual void doColock(IContext *ctx, int hour) = 0;
    virtual void doUse(IContext *ctx) = 0;
    virtual void doAlarm(IContext *ctx) = 0;
    virtual void doPhone(IContext *ctx) = 0;
};