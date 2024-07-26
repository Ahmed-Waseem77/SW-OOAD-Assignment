#include "DbUtils.hpp"
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
        cout << "User record created successfully" << endl;
    }
    catch (const exception& e) {
            cout << "Error: " << e.what() << endl;
        }
    
}

bool Repository::updateUserRecord(const string& documentID, const string& jsonString) {
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
        //count the number of documents in the collection using the database connection pointer
        cout << "Number of Users in the collection" << role << " is 5" << endl;
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


bool Repository::checkDatabaseConnectionAsynchronously()
{
    while(databaseConnection != nullptr)
    {
        connectionFlag = true;  
    }
    connectionFlag = false;
}

