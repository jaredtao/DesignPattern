#pragma once
#include "Visitor.h"
#include <string>
#include <iostream>
#include "File.h"
#include "Directory.h"
class ListVisitor : public Visitor
{
public:
    virtual void visit(File *file) override 
    {
        std::cout << m_currentDir  << "/" << file->getName()  << " " << file->getSize() << std::endl;
    }
    virtual void visit(Directory *dir) override
    {
        std::cout << m_currentDir  << "/" << dir->getName() << " " << dir->getSize() << std::endl;
        std::string saved = m_currentDir; 
        m_currentDir += "/" + dir->getName();
        auto entryList = dir->getEntryList();
        for (auto it: entryList)
        {
            it->accept(this);
        }
        m_currentDir = saved;
    }
private:
    std::string m_currentDir;
};