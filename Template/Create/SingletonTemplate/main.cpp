#include "SingleTon.hpp"
#include <chrono>
#include <iostream>
#include <string>
#include <thread>
#include <vector>
using namespace std;
class App : public SingleTon<App>
{
    friend class SingleTon<App>;

public:
    ~App() {}
    void showName()
    {
        cout << "name " << endl;
    }

protected:
    App() {}
};
void show(int n)
{
    this_thread::sleep_for(chrono::milliseconds(n));
    cout << &App::GetInstance() << endl;
}
int main()
{
    std::vector<std::thread> threadList;
    const int N = 10;
    for (int i = 0; i < N; ++i)
    {
        threadList.push_back(thread(show, N - i));
    }
    for (int i = 0; i < N; ++i)
    {
        threadList[i].join();
    }
    return 0;
}