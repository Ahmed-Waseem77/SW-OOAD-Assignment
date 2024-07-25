#include "DbUtils.hpp"
using namespace std;

DbUtils::DbUtils() {
    // Constructor: checks the connection with the database and returns true if the connection is successful otherwise false.
    try{
        //instance instance{}; // Creating a single and only connection of the db
        //client client{mongocxx::uri{}};
        cout << "Connected to the database" << endl;
    } catch (const exception& e) {
        cout << "Error: " << e.what() << endl;
    }
    
}



bool DbUtils::createUserRecord(const string& collection, const string& jsonString) {
    
    try{
        

    }



    
}

bool DbUtils::updateUserRecord(const string& collection, const string& documentID, const string& jsonString) {
    
}

bool DbUtils::removeUserRecord(const string& collection, const string& documentID) {
   
}

int DbUtils::countDocuments(const string& collection) const {
    
}
