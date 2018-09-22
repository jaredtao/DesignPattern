#include "CharDIsplay.h"
#include "StringDIsplay.h"
int main (int argc, char **argv) {
    IDisplay *d1 = new CharDisplay("Hello");
    d1->display();

    IDisplay *d2 = new StringDisplay("World");
    d2->display();

    delete d1;
    delete d2;
    return 0;
}
