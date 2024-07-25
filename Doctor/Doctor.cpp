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

#include "./Doctor.hpp"

Doctor::Doctor() {
    salary = 0;
}

Doctor::Doctor(float salary, schedule appointments) {
    this->salary = salary;
    this->appointments = appointments;
}

void Doctor::viewAppointments() {
    for (auto const& [key, val] : appointments) {
        cout << "Appointment ID: " << key << endl;
        cout << "Start Date: " << asctime(&val.startDate);
        cout << "End Date: " << asctime(&val.endDate);
        cout << "Is Booked: " << val.isBooked << endl;
    }
}

status Doctor::viewPatientMedicalRecords(patientID patientID) {
    try {
        cout << "fetching patient medical records" << patientID << endl;
    } catch (exception& e) {
        cerr << NO_MEDICAL_RECORDS_STRING << endl;
        return NO_MEDICAL_RECORDS_ERROR;
    }
}

status Doctor::updatePatientMedicalRecords(patientID patientID) {
    try {
        cout << "updating patient medical records" << patientID << endl;
    } catch (exception& e) {
        cerr << UPDATE_ERROR_STRING << endl;
        return UPDATE_ERROR;
    }
}

//appointment is valid if it exists and if it is not booked
bool Doctor::isValidAppointment(appointmentID appointmentID) {
    return appointments.find(appointmentID) != appointments.end() || appointments[appointmentID].isBooked;
}

bool Doctor::setAppointments(schedule newAppointments) {
    appointments = newAppointments;
    return true;
}
