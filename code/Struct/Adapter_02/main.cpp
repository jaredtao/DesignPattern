#include "PainterBanner.h"
#include <iostream>
using std::cout;
using std::endl;
int main(int argc, char **argv)
{
    Painter *painter = new PainterBanner(std::string("HelloWorld"));
    painter->printStrong();
    painter->printWeak();
    delete painter;
    return 0;
}