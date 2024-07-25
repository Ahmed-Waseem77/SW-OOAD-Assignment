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





