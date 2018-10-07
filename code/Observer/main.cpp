#include "DigitObserver.h"
#include "GraphObserver.h"
#include "RandomNumGen.h"
int main()
{
    NumGen *gen = new RandomNumGen;
    NumGenObserver *ob1 = new DigitObserver;
    NumGenObserver *ob2 = new GraphObserver;
    gen->addObserve(ob1);
    gen->addObserve(ob2);
    gen->execute();

    delete gen;
    delete ob1;
    delete ob2;

    return 0;
}