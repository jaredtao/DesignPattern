#pragma once
class File;
class Directory;
class Visitor {
public:
    virtual ~Visitor() {}
    virtual void visit(File *file) = 0;
    virtual void visit(Directory *dir) = 0;
};