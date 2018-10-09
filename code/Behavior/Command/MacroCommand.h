#pragma once
#include "ICommand.h"
#include <vector>
class MacroCommand : public ICommand
{
public:
    ~MacroCommand()
    {
        clear();
    }
    virtual void execute() override
    {
        for (auto cmd : m_commandList)
        {
            cmd->execute();
        }
    }
    void addCommand(ICommand *cmd)
    {
        m_commandList.push_back(cmd);
    }
    void clear()
    {
        for (auto cmd : m_commandList)
        {
            delete cmd;
        }
        m_commandList.clear();
    }
    void undo()
    {
        if (!m_commandList.empty())
        {
            auto cmd = m_commandList.back();
            delete cmd;
            m_commandList.pop_back();
        }
    }

private:
    std::vector<ICommand *> m_commandList;
};