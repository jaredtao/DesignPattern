#include "Book.h"
#include "BookSelf.h"
#include "BookSelfIterator.h"
#include <iostream>
#include <string>
using std::cerr;
using std::cout;
using std::endl;
using std::string;
int main()
{
    Aggregate<Book> *aggregate = new BookSelf<Book>(0);
    BookSelf<Book> *self = static_cast<BookSelf<Book> *>(aggregate);
    self->appendBoox(Book(string("name1")));
    self->appendBoox(Book(string("name2")));
    self->appendBoox(Book(string("name3")));
    
    auto itor = aggregate->CreateIterator();
    while (itor->hasNext())
    {
        Book book = itor->next();
        cout << book.GetName() << endl;
    }
    delete aggregate;
    delete itor;
    return 0;
}
