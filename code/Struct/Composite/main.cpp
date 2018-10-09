#include "Directory.h"
#include "File.h"

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
    static_cast<Entry *>(root)->printList();

    Directory *yuki = new Directory("yuki");
    Directory *hanako = new Directory("hanako");
    Directory *tomura = new Directory("tomura");

    usr->addEntryy(yuki);
    usr->addEntryy(hanako);
    usr->addEntryy(tomura);
    yuki->addEntryy(new File("diary.html", 100));
    hanako->addEntryy(new File("memo.tex", 1024));
    tomura->addEntryy(new File("junk.mail", 40));

    static_cast<Entry *>(root)->printList();

    // for test coverage
    {
        File *f = new File("123.txt", 1);
        f->addEntryy(root);
        f->printList("");
        delete f;
    }
    {
        yuki->printList("");
    }
    {
        File *f = new File("123.txt", 1);
        Entry *e = new Directory("test");
        e->addEntryy(f);
        e->printList("");
        e->toString();
        delete e;
    }
    delete root;
    return 0;
}