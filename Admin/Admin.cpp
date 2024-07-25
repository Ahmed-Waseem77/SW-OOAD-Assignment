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
#include "./Admin.hpp"

Admin::Admin() {
    this->role = Role::Admin;
    salary = 0;
}
void Admin::promptCreateUserAccount(){
    try{
        
        string name, phone, email, password;
        Role role;
        cout << "Enter the id of the user: "; cin >> id; // it should be generated automatically
        cout << "Enter the name of the user: "; cin >> name;
        cout << "Enter the phone number of the user: "; cin >> phone;
        cout << "Enter the email of the user: "; cin >> email;
        cout << "Enter the password of the user: "; cin >> password;
        cout << "Enter the role of the user: "; cin >> role ;
        if(role != Role::Patient && role != Role::Doctor){
            throw invalid_argument("Invalid Role");
        }
        if(name.empty() || phone.empty() || email.empty() || password.empty()){
            throw invalid_argument("User information can't be empty");
        }
        User user = User("1",name, phone, email, password, role);
        database->createUserRecord(user);
        
    }catch(invalid_argument& e){
        cout<<e.what()<<endl;
    }
}
void Admin::promptUpdateUserAccount(){
    try{
        string name, phone, email, password;
        Role role;
        cout << "Enter the id of the user: "; cin >> id;                
        cout << "Enter the name of the user: "; cin >> name;  
        cout << "Enter the phone number of the user: "; cin >> phone;
        cout << "Enter the email of the user: "; cin >> email;
        cout << "Enter the password of the user: "; cin >> password;
        cout << "Enter the role of the user: "; cin >> role ;
        if(role != Role::Patient && role != Role::Doctor){
            throw invalid_argument("Invalid Role");
        }
        
        
        database->updateUserRecord(id, "{name: "+name+", phone: "+phone+", email: "+email+", password: "+password+"}");
        cout << "User record updated successfully" << endl;
    }
    catch(invalid_argument& e){
        cout<<e.what()<<endl;
    }
}

void Admin::promptDeleteUserAccount(){
    try{
        cout << "Enter the id of the user: "; cin >> id; 
        database->removeUserRecord(id);
        cout << "User record removed successfully" << endl;
    }
    catch(invalid_argument& e){
        cout<<e.what()<<endl;
    }
}