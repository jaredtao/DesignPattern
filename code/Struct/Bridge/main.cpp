#include "CountDisplay.h"
#include "Display.h"
#include "StringDisplayImpl.h"
#include <memory>
int main(int argc, char **argv)
{
    std::shared_ptr<IDisplayImpl> impl1(new StringDisplayImpl("Hello, China"));
    std::shared_ptr<Display> d1(new Display(impl1.get()));

    std::shared_ptr<IDisplayImpl> impl2(new StringDisplayImpl("Hello, Tao"));
    std::shared_ptr<Display> d2(new CountDisplay(impl2.get()));

    std::shared_ptr<IDisplayImpl> impl3(new StringDisplayImpl("Hello,Universe"));
    std::shared_ptr<CountDisplay> d3(new CountDisplay(impl3.get()));

    d1->display();
    d2->display();
    d3->display();
    d3->mulitDisplay(4);
    return 0;
}
