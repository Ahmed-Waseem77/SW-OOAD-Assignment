/*
    Design Template for a simple Hospital Management System.
    Copyright (C) 2024  Mahmoud Raslan, Ahmed Raslan

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

*/

#ifndef DBUTILS_HPP
#define DBUTILS_HPP
#include <../include/include.hpp>
#include "defines.hpp"
#include "../Role/Role.hpp"
#include "../User/user.hpp" 
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

    static bool createUserRecord( const User user);
    static bool updateUserRecord( const std::string& documentID, const std::string& jsonString);
    static bool removeUserRecord( const std::string& documentID);
    static int countDocuments(Role role);

    static DbUtils* getInstance();
    static void closeConnection();
    static bool checkDatabaseConnectionAsynchronously();

    ~DbUtils();

};

#endif // DBUTILS_H
