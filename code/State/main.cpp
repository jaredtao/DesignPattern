#include "SafeFrame.h"

int main()
{
    IContext *ctx = new SafeFrame;
    for (int i = 0; i < 24; ++i)
    {
        ctx->setClock(i);
        ctx->doAction(IContext::ActionType::Use);
        ctx->doAction(IContext::ActionType::Phone);
        ctx->doAction(IContext::ActionType::Alarm);
    }
    delete ctx;
    return 0;
}