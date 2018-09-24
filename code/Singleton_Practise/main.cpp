#include "ThreeTon.h"
#include <iostream>
#include <string>
using namespace std;
class Apple : public ThreeTon<Apple>
{
    friend class ThreeTon<Apple>;

public:
    void show()
    {
        cout << __FUNCTION__ << endl;
    }
    ~Apple()
    {
        cout << __FUNCTION__ << endl;
    }

protected:
    Apple() {}
};

int main()
{
    Apple::GetInstance(0).show();
    cout << &Apple::GetInstance(0) << endl;
    Apple::GetInstance(1).show();
    cout << &Apple::GetInstance(1) << endl;
    Apple::GetInstance(2).show();
    cout << &Apple::GetInstance(2) << endl;
    Apple::GetInstance(3).show();
    cout << &Apple::GetInstance(3) << endl;
    return 0;
}
