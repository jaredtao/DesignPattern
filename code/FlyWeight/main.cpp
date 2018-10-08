#include "BigCharFactory.h"
int main()
{
    BigCharFactory f;
    for (int i = 0; i < 20; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            BigChar *b = f.getBigChar(i);
            std::cout << i << "  " << b << std::endl;
            b->show();
        }
    }
    return 0;
}