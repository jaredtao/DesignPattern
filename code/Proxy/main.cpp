#include "PrinterProxy.h"
int main()
{
    Printable *p = new PrinterProxy("123");
    std::cout << p->getPrinterName() << std::endl;
    p->setPrinterName("456");
    std::cout << p->getPrinterName() << std::endl;
    p->print();
    p->setPrinterName("789");
    p->print();
    delete p;
    return 0;
}