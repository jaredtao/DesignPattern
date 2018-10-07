#include "FullBorder.h"
#include "SideBorder.h"
#include "StringDisplay.h"
#include <cassert>
int main()
{
    IDisplay *d1 = new StringDisplay("Hello");
    assert(d1->getRow(-1).empty());
    IDisplay *d2 = new SideBorder(d1, '#');
    IDisplay *d3 = new FullBorder(d2);
    d1->show();
    d2->show();
    d3->show();
    IDisplay *d4 = new SideBorder(new FullBorder(new FullBorder(new SideBorder(new FullBorder(new StringDisplay("Hello,World")), '*'))), '/');
    d4->show();

    delete d1;
    delete d4;
    return 0;
}