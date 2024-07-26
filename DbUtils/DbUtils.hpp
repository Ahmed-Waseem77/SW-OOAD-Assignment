#ifndef DBUTILS_HPP
#define DBUTILS_HPP
#include <../include/include.hpp>
#include "defines.hpp"
#include <thread>
 //Singleton Class since it is only one databaseConnection
class DbUtils {
private:
    DbUtils();
    static DbUtils* databaseInstance;
    static connection* databaseConnection;

public:
    static bool connectionFlag;
    
    DbUtils(const DbUtils& obj) = delete;

    static schedule DbUtils::getAppointments(doctorID);
    static int countDocuments(const std::string& collection);
    static bool createUserRecord(const std::string& collection, const std::string& jsonString);
    static bool updateUserRecord(const std::string& collection, const std::string& documentID, const std::string& jsonString);
    static bool removeUserRecord(const std::string& collection, const std::string& documentID);

    static DbUtils* getInstance();
    static void closeConnection();
    static bool isConnected();
    static bool checkDatabaseConnectionAsynchronously();

};

#endif // DBUTILS_H
