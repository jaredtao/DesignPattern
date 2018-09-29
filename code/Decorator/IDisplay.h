#pragma once
#include <iostream>
#include <string>
class IDisplay
{
public:
    virtual ~IDisplay() {}
    virtual int getRows() const = 0;
    virtual int getColumns() const = 0;
    virtual std::string getRow(int index) const = 0;
    void show()
    {
        int r = getRows();
        for (int i = 0; i < r; ++i)
        {
            std::cout << getRow(i) << std::endl;
        }
    }
};