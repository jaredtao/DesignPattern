#include "PageMaker.h"
#include <cassert>
int main(int argc, char **argv)
{
    assert(DataBase::GetInstance().getNameByEmail("").empty());
    PageMaker::GetInstance().makeWelcomePage("zhangsan@zhangsan.com");
}