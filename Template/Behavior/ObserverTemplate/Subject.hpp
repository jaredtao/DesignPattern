#pragma once
#include <vector>
#include <algorithm>

//Subject 事件或消息的主体。模板参数为观察者类型
template<typename ObserverType>
class Subject {
public:
    //订阅
    void subscibe(ObserverType *obs)
    {
        auto itor = std::find(m_observerList.begin(), m_observerList.end(), obs);
        if (m_observerList.end() == itor) {
            m_observerList.push_back(obs);
        }
    }
    //取消订阅
    void unSubscibe(ObserverType *obs)
    {
        m_observerList.erase(std::remove(m_observerList.begin(), m_observerList.end(), obs));
    }
    //发布。这里的模板参数为函数类型。
    template <typename FuncType>
    void publish(FuncType func)
    {
        for (auto obs: m_observerList)
        {
            //调用回调函数，将obs作为第一个参数传递
            func(obs);
        }
    }
private:
    std::vector<ObserverType *> m_observerList;
};