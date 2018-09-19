#pragma once
#include "Iterator.h"
template <class Item>
class BookSelf;
template <class Item>
class BookSelfIterator : public Iterator<Item>
{
public:
    BookSelfIterator(BookSelf<Item> *bookSelf) : m_bookSelf(bookSelf) {}
    virtual bool hasNext() override
    {
        return m_bookSelf->length() > 0 && m_currentIndex < m_bookSelf->length() - 1;
    }
    virtual Item next() override
    {
        m_currentIndex++;
        return m_bookSelf->GetBookAt(m_currentIndex);
    }

private:
    BookSelf<Item> *m_bookSelf;
    int m_currentIndex = -1;
};
