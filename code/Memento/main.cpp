#include "Gamer.h"
#include "Memento.h"
int main()
{
    Gamer g(100);
    Memento m = g.createMemento();
    for (int i = 0; i < 100; ++i)
    {
        std::cout << "===== " + i << std::endl;
        std::cout << g.toString() << std::endl;
        g.bet();
        if (g.getMoney() > m.getMoney())
        {
            m = g.createMemento();
            std::cout << "addMoney, save" << std::endl;
        }
        else if (g.getMoney() < m.getMoney() / 2)
        {
            g.restoreMemento(m);
            std::cout << "decMoney, restore" << std::endl;
        }
    }
    return 0;
}