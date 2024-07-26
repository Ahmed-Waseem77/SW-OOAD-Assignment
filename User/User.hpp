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

#ifndef USER_HPP
#define USER_HPP

#include <string>
#include "../Role/Role.hpp"
using namespace std;

class User {
protected:
    string id;
    string name;
    string phoneNumber;
    string emailAddress;
    string password;
    Role role;  
    
    

public:
    User();
    User(const string& userId,const string& name, const string& phone, const string& email, const string& password, Role role);

    bool login(const string& email, const string& pass);
    void viewAccount();
    void promptUpdateUserAccount();
    void promptDeleteOwnAccount();
    
};

#endif 