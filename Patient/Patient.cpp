
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

#include "./Patient.hpp"

Patient::Patient() {
    this->role = Role::Patient;
}

Patient::Patient(std::string medicalRecords, vector<doctorID> supervisedBy) {
    this->role = Role::Patient;
    this->medicalRecords = medicalRecords;
    this->supervisedBy = supervisedBy;
}

void Patient::viewOwnMedicalRecords() {
    std::cout << this->medicalRecords << std::endl;
}

void Patient::viewValidAppointments(doctorID doctorID) {
    schedule doctorSchedule = Repository::getAppointments(doctorID);

    for(auto const& [key, val] : doctorSchedule) {
        if (val.isBooked == false) {
            std::cout << "Appointment ID: " << key << std::endl;
            std::cout << "Start Date: " << asctime(&val.startDate) << std::endl;
            std::cout << "End Date: " << asctime(&val.endDate) << std::endl;
        }
    }

}

bool Patient::bookAppointment(appointmentID) {
    try {
        //send update query through repository
        std::cout << "Appointment booked successfully" << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

}

bool Patient::cancelAppointment(appointmentID) {
    try {
        //send update query through repository
        std::cout << "Appointment canceled successfully" << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }

}

bool Patient::singup(std::string email, std::string password) {
    try {
        //send insert query through repository
        std::cout << "Patient signed up successfully" << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << "Error: " << e.what() << std::endl;
    }
}



