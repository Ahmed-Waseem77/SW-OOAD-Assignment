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

#include "./Doctor/Doctor.hpp"
#include "./Appointment/Appointment.hpp"
#include "User/User.hpp"
#include "./include/include.hpp"
#include "./Admin/Admin.hpp"
#include "./Patient/Patient.hpp"

int main() {

    Admin admin;

    admin.promptCreateUserAccount();
    admin.promptUpdateUserAccount();
    admin.promptDeleteUserAccount();
    admin.promptDeleteOwnAccount();

    Doctor doctor;
    doctor.login("7ammada@7amada","7amada");
    doctor.updatePatientMedicalRecords("1");
    doctor.promptUpdateUserAccount();

    Patient patient;
    patient.singup("7amada@gmail.com","123415151515");
    patient.viewValidAppointments("12");
    patient.bookAppointment(1);
    patient.viewOwnMedicalRecords();
    patient.viewAccount();



    
    return 0;
}