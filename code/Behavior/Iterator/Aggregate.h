#pragma once
template <class Item>
class Iterator;

template <class Item>
class Aggregate
{
public:
    ~Aggregate() {}
    virtual Iterator<Item> *CreateIterator() = 0;
};
