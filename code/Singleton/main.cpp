#include "SingleTon.hpp"
#include <iostream>
#include <string>
using namespace std;
class Apple : public SingleTon<Apple>
{
    friend class SingleTon<Apple>;

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
    friend class SingleTon<Orange>;

public:
    ~Orange()
    {
        cout << __FUNCTION__ << endl;
    }
    void show()
    {
        cout << __FUNCTION__ << " " << m_name << endl;
    }

protected:
    Orange(const std::string &name) : m_name(name)
    {
        cout << name << endl;
    }

private:
    std::string m_name;
};

int main()
{
    Apple::GetInstance().show();
    cout << &Apple::GetInstance() << endl;
    Apple::GetInstance().show();
    cout << &Apple::GetInstance() << endl;

    Orange::GetInstance("or1").show();
    Orange::GetInstance("or1").show();
    Orange::GetInstance("").show();
    return 0;
}
