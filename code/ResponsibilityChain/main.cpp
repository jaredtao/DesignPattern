#include "NoSupport.h"
#include "LimitSupport.h"
#include "OddSupport.h"
#include "SpecialSupport.h"
int main() {
    Support *s1 = new NoSupport("Alance");
    Support *s2 = new LimitSupport("Bob", 30);
    Support *s3 = new OddSupport("Charlie");
    Support *s4 = new SpecialSupport("David", 55);
    s1->setNext(s2)->setNext(s3)->setNext(s4);
    for (int i = 0; i < 100; ++i) 
    {
        Trouble t(i);
        s1->support(&t);
    }
    delete s1;
    delete s2;
    delete s3;
    delete s4;
    return 0;

}