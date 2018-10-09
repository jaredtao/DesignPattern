#pragma once
#include "Visitor.h"
class Element {
public:
    virtual ~Element() {}
    virtual void accept(Visitor *visitor) = 0;
};