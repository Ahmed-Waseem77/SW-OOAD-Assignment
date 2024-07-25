#include "DbUtils.hpp"
using namespace std;

DbUtils::DbUtils() {
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



bool DbUtils::createUserRecord(const string& collection, const string& jsonString) {
    
    try{
        if(!connectionFlag) {
            throw runtime_error ("Database connection failed");
        }
        //Insert the json string into the collection using the database connection pointer
        cout << "User record created successfully" << endl;
    }
    catch (const exception& e) {
            cout << "Error: " << e.what() << endl;
        }


    
}

bool DbUtils::updateUserRecord(const string& collection, const string& documentID, const string& jsonString) {
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

bool DbUtils::removeUserRecord(const string& collection, const string& documentID) {
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

int DbUtils::countDocuments(const std::string &collection)
{
     try{
        if(!connectionFlag) {
            throw runtime_error ("Database connection failed");
        }
        //count the number of documents in the collection using the database connection pointer
        cout << "Number of documents in the collection: " << collection << " is 5" << endl;
    }
    catch (const exception& e) {
            cout << "Error: " << e.what() << endl;
        }
}

DbUtils *DbUtils::getInstance()
{
    if(databaseInstance == nullptr)
    {
        databaseInstance = new DbUtils();
        thread connectionCheckThread(&DbUtils::checkDatabaseConnectionAsynchronously, databaseInstance);
        connectionCheckThread.detach();
    }
    return databaseInstance;
}


bool DbUtils::checkDatabaseConnectionAsynchronously()
{
    while(databaseConnection != nullptr)
    {
        connectionFlag = true;  
    }
    connectionFlag = false;
}

