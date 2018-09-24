#pragma once
#include <utility>
template <class T>
class SingleTon
{
public:
    static T &GetInstance()
    {
        static T ins;
        return ins;
    }
    SingleTon(const SingleTon &) = delete;
    SingleTon &operator=(const SingleTon &) = delete;

protected:
    SingleTon() {}
    virtual ~SingleTon() {}
};
