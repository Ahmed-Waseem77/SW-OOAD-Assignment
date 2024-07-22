#ifndef USER_HPP
#define USER_HPP

#include <string>
#include "../Role/Role.hpp"

using namespace std;
class User {
protected:
    int id;
    string name;
    string phoneNumber;
    string emailAddress;
    string password;
    Role role;  

public:
    User(const int& userId,const string& name, const string& phone, const string& email, const string& password, Role role);

    bool login(const string& email, const string& pass);
    void viewAccount();
    bool promptUpdateUserAccount();
    bool promptDeleteOwnAccount();
    
};

#endif 