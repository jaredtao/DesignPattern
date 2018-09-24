#pragma once
template <class T>
class ThreeTon
{
public:
    template <typename... Args>
    static T &GetInstance(int id, Args... args)
    {
        int p = id % 3;
        switch (p)
        {
            case 0:
            {
                static T ins(std::forward<Args>(args)...);
                return ins;
            }
            case 1:
            {
                static T ins(std::forward<Args>(args)...);
                return ins;
            }
            case 2:
            default:
            {
                static T ins(std::forward<Args>(args)...);
                return ins;
            }
        }
    }
    ThreeTon(const ThreeTon &) = delete;
    ThreeTon &operator=(const ThreeTon &) = delete;

protected:
    ThreeTon(){};
    virtual ~ThreeTon() {}
};
