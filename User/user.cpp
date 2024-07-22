#include "User.h"
#include <iostream>


User::User(const int& userId,const string& name, const string& phone, const string& email, const string& password, Role role)
    : id(userId), name(name), phoneNumber(phone), emailAddress(email), password(password), role(role) {}


bool User::login(const string& email, const string& passedPassword) {
    if (emailAddress == email && passedPassword == password) {
        cout << "Login successful for " << email << endl;
        return true;
    }
    cout << "Login failed for " << email << endl;
    return false;
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


Role User::getRole() const {
    return role;
}


void User::setRole(Role newRole) {
    role = newRole;
}
