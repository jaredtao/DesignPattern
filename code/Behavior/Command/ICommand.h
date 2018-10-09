#pragma once
class ICommand
{
public:
    virtual ~ICommand() {}
    virtual void execute() = 0;
};