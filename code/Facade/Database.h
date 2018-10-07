#pragma once
#include <string>
#include <unordered_map>
class DataBase
{
public:
    ~DataBase() = default;
    static DataBase &GetInstance()
    {
        static DataBase db;
        return db;
    }
    std::string getNameByEmail(const std::string &email) const
    {
        auto it = m_map.find(email);
        if (it != m_map.end())
        {
            return it->second;
        }
        else
        {
            return {};
        }
    }

protected:
    DataBase(const DataBase &) = delete;
    DataBase(DataBase &&) = delete;
    DataBase &operator=(const DataBase &) = delete;
    DataBase &operator=(DataBase &&) = delete;

private:
    DataBase() {}

private:
    std::unordered_map<std::string, std::string> m_map{ { "zhangsan@zhangsan.com", "zhangsan" },
                                                        { "lisi@lisi.com", "lisi" },
                                                        { "wangwu@wangwu.com", "wangwu" } };
};