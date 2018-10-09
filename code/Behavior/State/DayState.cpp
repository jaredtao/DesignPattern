#include "DayState.h"
#include "NightState.h"

void DayState::doColock(IContext *ctx, int hour)
{
    if (hour < 9 || 17 <= hour)
    {
        ctx->stateChange(&NightState::GetInstance());
    }
}
