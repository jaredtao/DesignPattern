#pragma once
#include "NumGen.h"
#include "NumGenObserver.h"
#include <chrono>
#include <iostream>
#include <thread>
class DigitObserver : public NumGenObserver
{
public:
    virtual void update(NumGen *numGen) override
    {
        std::cout << numGen->getNumber() << std::endl;
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
};