#include "BigChar.h"
#include <unordered_map>
class BigCharFactory
{
public:
    ~BigCharFactory()
    {
        for (auto i : m_map)
        {
            delete i.second;
        }
        m_map.clear();
    }
    BigChar *getBigChar(int order)
    {
        BigChar *b = nullptr;
        int tOrder = order % 11;
        auto it = m_map.find(tOrder);
        if (it == m_map.end())
        {
            b = new BigChar(tOrder);
            m_map.insert({ tOrder, b });
            return b;
        }
        else
        {
            return it->second;
        }
    }

private:
    std::unordered_map<int, BigChar *> m_map;
};