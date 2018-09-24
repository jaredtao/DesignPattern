#pragma once
template <class T>
class SingleTon
{
public:
    template <typename... Args>
    static T &GetInstance(Args... args)
    {
        static T ins(std::forward<Args>(args)...);
        return ins;
    }
    SingleTon(const SingleTon &) = delete;
    SingleTon &operator=(const SingleTon &) = delete;

protected:
    SingleTon(){};
    virtual ~SingleTon() {}
};
