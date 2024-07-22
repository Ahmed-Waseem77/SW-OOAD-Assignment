#include "../User/user.hpp"
#include <iostream>
#include "../Exceptions/exceptions.hpp"

User::User(const int& userId,const string& name, const string& phone, const string& email, const string& password, Role role)
    : id(userId), name(name), phoneNumber(phone), emailAddress(email), password(password), role(role) {
        if (name.empty() || phone.empty() || email.empty() || password.empty()) {
        throw invalid_argument("User information can't be empty");
    }
    }


bool User::login(const string& email, const string& passedPassword) {
    if (emailAddress == email && passedPassword == password) {
        cout << "Login successful for " << email << endl;
        return true;
    }
    throw LoginFailedException("Login failed: Invalid email or password");
    
}


void User::viewAccount() {
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Phone: " << phoneNumber << endl;
    cout << "Email: " << emailAddress << endl;
    cout << "Role: " << (role == Role::Patient ? "Patient" : role == Role::Doctor ? "Doctor" : "Admin") << endl;
}


bool User::promptUpdateUserAccount() {
    cout << "Updating user account for " << emailAddress << endl;
    //Should call from dbUtils the UPDATE function and pass the ID 
    return true;
}


bool User::promptDeleteOwnAccount() {
    cout << "Account for " << emailAddress << " deleted." << endl;
    //Should call from dbUtils the DELETE function and pass the ID 
    return true;
}





