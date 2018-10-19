#pragma once
template <class T>
class SingleTon
{
public:
    static T &GetInstance()
    {
        static T t;
        return t;
    }
    virtual ~SingleTon() {}
    SingleTon(const SingleTon &) = delete;
    SingleTon(SingleTon &&) = delete;
    SingleTon &operator=(const SingleTon &) = delete;
    SingleTon &operator=(SingleTon &&) = delete;

protected:
    SingleTon() {}
};