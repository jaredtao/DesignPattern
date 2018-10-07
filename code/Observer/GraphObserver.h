#pragma once
#include "NumGen.h"
#include "NumGenObserver.h"
#include <chrono>
#include <iostream>
#include <thread>
class GraphObserver : public NumGenObserver
{
public:
    virtual void update(NumGen *numGen) override
    {
        auto num = numGen->getNumber();
        std::cout << "GraphObserver:";
        for (int i = 0; i < num; ++i)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
};