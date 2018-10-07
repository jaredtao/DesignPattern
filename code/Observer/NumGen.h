#pragma once
#include "NumGenObserver.h"
#include <algorithm>
#include <vector>
class NumGen
{
public:
    virtual ~NumGen() {}
    void addObserve(NumGenObserver *observe)
    {
        m_observeList.push_back(observe);
    }
    void deleteObserve(NumGenObserver *observe)
    {
        m_observeList.erase(std::remove(m_observeList.begin(), m_observeList.end(), observe), m_observeList.end());
    }
    void notifyObverses()
    {
        for (auto gen : m_observeList)
        {
            gen->update(this);
        }
    }
    virtual int getNumber() = 0;
    virtual void execute() = 0;

private:
    std::vector<NumGenObserver *> m_observeList;
};