#pragma once
#include "Aggregate.h"
#include <string>
#include <vector>

template <class Item>
class BookSelfIterator;

template <class Item>
class BookSelf : public Aggregate<Item>
{
public:
    BookSelf(int maxSize)
    {
        m_books.resize(maxSize, std::string(""));
    }
    Iterator<Item> *CreateIterator() override
    {
        return new BookSelfIterator<Item>(this);
    }

    Item GetBookAt(int index) const
    {
        return m_books.at(index);
    }
    void appendBoox(const Item &book)
    {
        m_books.emplace_back (book);
    }
    int length() const
    {
        return static_cast<int>(m_books.size());
    }

private:
    std::vector<Item> m_books;
};
