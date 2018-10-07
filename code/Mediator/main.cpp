#include "CColleague1.h"
#include "CColleague2.h"
#include "CMediator.h"
int main()
{
    IColleague *c1 = new CColleague1;
    IColleague *c2 = new CColleague2;
    IMediator *md = new CMediator;
    md->registerColleague(1, c1);
    md->registerColleague(2, c2);

    c1->sendMsg(2, "Hello, i am c1");
    c2->sendMsg(1, "Hello, i am c2");
    delete c1;
    delete c2;
    delete md;
    return 0;
}