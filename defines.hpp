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

#ifndef DEFINES_H
#define DEFINES_H

typedef int patientID;
typedef int doctorID;
typedef int appointmentID;
typedef int status;
typedef map<appointmentID, Appointment> schedule;
typedef int connection;

#define NO_MEDICAL_RECORDS_STRING "No medical records found for patient"
#define NO_MEDICAL_RECORDS_ERROR 1
#define UPDATE_ERROR_STRING "Error updating patient medical records"
#define UPDATE_ERROR 2


#endif // DEFINES_H