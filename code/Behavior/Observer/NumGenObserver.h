#pragma once
class NumGen;
class NumGenObserver
{
public:
    virtual ~NumGenObserver() {}
    virtual void update(NumGen *numGen) = 0;
};