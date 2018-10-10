#include "Variable.h"
#include "Context.h"

int Variable::interpret(Context *ctx)
{
    return ctx->lookUpValue(this);
}
