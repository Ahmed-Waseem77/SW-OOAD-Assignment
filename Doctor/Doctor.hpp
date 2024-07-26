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

#ifndef DOCTOR_HPP
#define DOCTOR_HPP

#include "../include/include.hpp"
#include "../User/user.hpp"
#include "../Appointment/Appointment.hpp"
#include "../defines.hpp"

class Doctor : public User {

private:
    float salary;
    
public:
    Doctor();
    Doctor(std::string phone, double salary);

    schedule appointments;

    void viewAppointments();

    status viewPatientMedicalRecords(patientID);
    status updatePatientMedicalRecords(patientID); 

    bool isValidAppointment(appointmentID);
    bool setAppointments(schedule newAppointments);
};

#endif // DOCTOR_HPP