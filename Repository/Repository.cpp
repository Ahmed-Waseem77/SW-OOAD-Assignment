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

#include "Repository.hpp"
using namespace std;

Repository::Repository() {
    // Constructor: checks the connection with the database and returns true if the connection is successful otherwise false.
    try{
       if(!databaseConnection) {
            throw runtime_error ("Database connection failed");
        }
        cout << "Connected to the database" << endl;
    } 
    catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }

    
}


bool Repository::createUserRecord(User user) {
    
    try{
        if(!connectionFlag) {
            throw runtime_error ("Database connection failed");
        }
        //Insert the user's data into the collection using the database connection pointer
        cout << "User record created successfully" << endl;
    }
    catch (const exception& e) {
            cout << "Error: " << e.what() << endl;
        }
    
}

bool Repository::updateUserRecord( const string& documentID, const string& jsonString) {
    try{
        if(!connectionFlag) {
            throw runtime_error ("Database connection failed");
        }
        
        //update the json string in the collection using the database connection pointer and the documentID
        cout << "User record updated successfully" << endl;
    }
    catch (const exception& e) {
            cout << "Error: " << e.what() << endl;
        }
    
}

bool Repository::removeUserRecord(const string& documentID) {
    try{
        if(!connectionFlag) {
            throw runtime_error ("Database connection failed");
        }
        //remove the json string in the collection using the database connection pointer and the documentID
        //if the documentID is not found, throw an exception
        cout << "User record removed successfully" << endl;
    }
    catch (const exception& e) {
            cout << "Error: " << e.what() << endl;
        }
   
}

int Repository::countDocuments(Role role)
{
     try{
        if(!connectionFlag) {
            throw runtime_error ("Database connection failed");
        }
        //count the number of documents for the passed role in the collection using the database connection pointer
        cout << "The Number is 5" << endl;
    }
    catch (const exception& e) {
            cout << "Error: " << e.what() << endl;
        }
}

Repository *Repository::getInstance()
{
    if(databaseInstance == nullptr)
    {
        databaseInstance = new Repository();
        thread connectionCheckThread(&Repository::checkDatabaseConnectionAsynchronously, databaseInstance);
        connectionCheckThread.detach();
    }
    return databaseInstance;
}

void Repository::closeConnection()
{
    //databaseConnection.close();
    cout << "Connection closed" << endl;
   
}

bool Repository::checkDatabaseConnectionAsynchronously()
{
    while(databaseConnection != nullptr)
    {
        connectionFlag = true;  
    }
    connectionFlag = false;
}


schedule Repository::getAppointments(doctorID) {
    // Function to get the appointments from the database
    schedule appointments;
    try {
        if(!connectionFlag) {
            throw runtime_error ("Database connection failed");
        }
        //get the appointments from the database using the database connection pointer
        cout << "Appointments fetched successfully" << endl;
    }
    catch (const exception& e) {
            cout << "Error: " << e.what() << endl;
        }
    return appointments;
}


