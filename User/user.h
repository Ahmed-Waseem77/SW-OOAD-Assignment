#ifndef USER_H
#define USER_H

#include <string>
#include "Role.h"

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
    
    Role getRole() const;
    void setRole(Role newRole); 
};

#endif 