#include "Directory.h"
#include "File.h"
#include "ListVisitor.h"
int main()
{
    Directory *root = new Directory("root");
    Directory *bin = new Directory("bin");
    Directory *tmp = new Directory("tmp");
    Directory *usr = new Directory("usr");

    root->addEntryy(bin);
    root->addEntryy(tmp);
    root->addEntryy(usr);
    bin->addEntryy(new File("vi", 3000));
    bin->addEntryy(new File("latex", 2000));
    auto list1 = new ListVisitor;
    root->accept(list1);

    Directory *yuki = new Directory("yuki");
    Directory *hanako = new Directory("hanako");
    Directory *tomura = new Directory("tomura");

    usr->addEntryy(yuki);
    usr->addEntryy(hanako);
    usr->addEntryy(tomura);
    yuki->addEntryy(new File("diary.html", 100));
    hanako->addEntryy(new File("memo.tex", 1024));
    tomura->addEntryy(new File("junk.mail", 40));
    auto list2 = new ListVisitor;
    root->accept(list2);

    // add for coverage
    {
        yuki->printList("");
        Entry *e = new Directory("test");
        File *f = new File("123.txt", 1024);
        f->printList("");
        f->addEntryy(e);
        f->toString();
        delete f;
        delete e;
    }
    delete root;
    delete list1;
    delete list2;
    return 0;
}