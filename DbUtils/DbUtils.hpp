#ifndef DBUTILS_HPP
#define DBUTILS_HPP
#include <../include/include.hpp>
#include "defines.hpp"
#include "../Role/Role.hpp"
#include <thread>
 //Singlton Class since it is only one databaseConnection of the class
class DbUtils {
private:
    DbUtils();
    static DbUtils* databaseInstance;
    static connection* databaseConnection;

public:
    static bool connectionFlag;
    
    DbUtils(const DbUtils& obj) = delete;

    static bool createUserRecord( const std::string& jsonString);
    static bool updateUserRecord( const std::string& documentID, const std::string& jsonString);
    static bool removeUserRecord( const std::string& documentID);
    static int countDocuments(Role role);

    static DbUtils* getInstance();
    static void closeConnection();
    static bool checkDatabaseConnectionAsynchronously();

    ~DbUtils();

};

#endif // DBUTILS_H
