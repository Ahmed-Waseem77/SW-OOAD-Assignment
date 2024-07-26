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

#ifndef ROLE_HPP
#define ROLE_HPP

enum class Role {
    Patient,
    Doctor,
    Admin
};

std::map<std::string, Role> roleMap = {
    {"Patient", Role::Patient},
    {"Doctor", Role::Doctor},
    {"Admin", Role::Admin}
};

std::istream& operator>>(std::istream& in, Role& role) {
    std::string roleStr;
    in >> roleStr;
    role = roleMap[roleStr];
    return in;
}

std::ostream& operator<<(std::ostream& out, Role role) {
    if (role == Role::Patient) {
        out << "Patient";
    } else if (role == Role::Doctor) {
        out << "Doctor";
    } else if (role == Role::Admin) {
        out << "Admin";
    }
    return out;
}
#endif // ROLE_H