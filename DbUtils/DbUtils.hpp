#ifndef DBUTILS_HPP
#define DBUTILS_HPP
#include <../include/include.hpp>
#include "defines.hpp"
 //Singlton Class since it is only one databaseConnection of the class
class DbUtils {
private:
    DbUtils();
    static DbUtils* databaseInstance;
    static connection* databaseConnection;

public:
    DbUtils(const DbUtils& obj) = delete;

    bool createUserRecord(const std::string& collection, const std::string& jsonString);
    bool updateUserRecord(const std::string& collection, const std::string& documentID, const std::string& jsonString);
    bool removeUserRecord(const std::string& collection, const std::string& documentID);
    int countDocuments(const std::string& collection);
};

#endif // DBUTILS_H
