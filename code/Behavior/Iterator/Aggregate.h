#pragma once
template <class Item>
class Iterator;

template <class Item>
class Aggregate
{
public:
    virtual ~Aggregate() {}
    virtual Iterator<Item> *CreateIterator() = 0;
};
