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

#include "../include/include.hpp"

enum class Role {
    Patient,
    Doctor,
    Admin
};

inline std::unordered_map<std::string, Role> roleunordered_map = {
    {"Patient", Role::Patient},
    {"Doctor", Role::Doctor},
    {"Admin", Role::Admin}
};

inline std::istream& operator>>(std::istream& in, Role& role) {
    std::string roleStr;
    in >> roleStr;
    role = roleunordered_map[roleStr];
    return in;
}

inline std::ostream& operator<<(std::ostream& out, const Role& role) { // Note the addition of 'const'
    switch (role) {
        case Role::Patient:
            out << "Patient";
            break;
        case Role::Doctor:
            out << "Doctor";
            break;
        case Role::Admin:
            out << "Admin";
            break;
        // Consider adding other cases here if there are any
        default:
            break;
    }
    return out; // Ensure you return the ostream object
}

#endif // ROLE_H