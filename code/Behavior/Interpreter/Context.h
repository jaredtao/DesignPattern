#pragma once
#include "Variable.h"
#include <unordered_map>
class Context
{
public:
    void registerVariable(Variable *var, int value)
    {
        m_map.insert({ var, value });
    }
    int lookUpValue(Variable *var)
    {
        auto itor = m_map.find(var);
        if (itor != m_map.end())
        {
            return itor->second;
        }
        return 0;
    }

private:
    std::unordered_map<Variable *, int> m_map;
};