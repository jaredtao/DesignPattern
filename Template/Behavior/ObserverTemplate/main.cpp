#include "Subject.hpp"
#include <functional>
#include <iostream>

using std::cout;
using std::endl;

//CatObserver 接口 猫的观察者
class CatObserver {
public:
    //猫叫事件
    virtual void onMiaow() = 0;
public:
    virtual ~CatObserver() {}
};

//Tom 继承于Subject模板类，模板参数为CatObserver。这样Tom就拥有了订阅、发布的功能。
class Tom : public Subject<CatObserver>
{
public:
    void miaoW()
    {
        cout << "喵!" << endl;
        //发布"猫叫"。
        //这里取CatObserver类的成员函数指针onMiaow。而成员函数指针调用时，要传递一个对象的this指针才行的。
        //所以用std::bind 和 std::placeholders::_1将第一个参数 绑定为 函数被调用时的第一个参数，也就是前面Subject::publish中的obs
        publish(std::bind(&CatObserver::onMiaow, std::placeholders::_1));
    }
};
//Jerry 继承于 CatObserver
class Jerry: public CatObserver
{
public:
    //重写“猫叫事件”
    void onMiaow() override
    {
        //发生 “猫叫”时 调用 逃跑
        RunAway();
    }
    void RunAway()
    {
        cout << "那只猫又来了，快溜！" << endl;
    }
};
int main(int argc, char *argv[])
{
    Tom tom;
    Jerry jerry;

    //拿jerry去订阅Tom的 猫叫事件
    tom.subscibe(&jerry);

    tom.miaoW();
    return 0;
}