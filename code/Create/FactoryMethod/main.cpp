#include "IDCardFactory.h"
int main()
{
    IFactory *fac = new IDCareFactory;
    IProduct *pro = fac->create("tao");
    IProduct *pro2 = fac->create("tao2");
    pro->use();
    pro2->use();

    delete pro;
    delete fac;
    delete pro2;
    return 0;
}