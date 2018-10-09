#pragma once
template <class Item>
class Iterator
{
public:
    ~Iterator() {}
    virtual bool hasNext() = 0;
    virtual Item next() = 0;
};
