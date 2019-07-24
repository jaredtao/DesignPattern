#include "SingleTon.h"
#include <iostream>
#include <string>
using namespace std;
class Apple : public SingleTon<Apple>
{
    friend SingleTon<Apple>;

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

class Orange : public SingleTon<Orange>
{
    friend SingleTon<Orange>;

public:
    ~Orange()
    {
        cout << __FUNCTION__ << endl;
    }
    void show()
    {
        cout << __FUNCTION__ << endl;
    }

protected:
    Orange()
    {

    }
};

int main()
{
    Apple::GetInstance().show();
    cout << &Apple::GetInstance() << endl;
    Apple::GetInstance().show();
    cout << &Apple::GetInstance() << endl;

    Orange::GetInstance().show();
    Orange::GetInstance().show();
    Orange::GetInstance().show();
    return 0;
}
