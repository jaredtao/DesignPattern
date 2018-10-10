#include "Add.h"
#include "Constant.h"
#include "Div.h"
#include "Mul.h"
#include "Sub.h"
#include <iostream>
int main()
{
    Context ctx;
    Variable a;
    Variable b;
    Constant c(1024);
    ctx.registerVariable(&a, 22);
    ctx.registerVariable(&b, 11);
    Expression *e1 = new Mul(&a, &b); //242
    Expression *e2 = new Div(&a, &b); //1
    Expression *e3 = new Add(e2, &c); //1025
    Expression *e = new Sub(e1, e3);
    std::cout << e->interpret(&ctx) << std::endl;

    delete e1, e2, e3, e;
    return 0;
}