#pragma once
#include <utility>
template <class T>
class ThreeTon
{
public:
    static T &GetInstance(int id)
    {
        int p = id % 3;
        switch (p)
        {
            case 0:
            {
                static T ins;
                return ins;
            }
            case 1:
            {
                static T ins;
                return ins;
            }
            case 2:
            default:
            {
                static T ins;
                return ins;
            }
        }
    }
    ThreeTon(const ThreeTon &) = delete;
    ThreeTon &operator=(const ThreeTon &) = delete;

protected:
    ThreeTon(){}
    virtual ~ThreeTon() {}
};
