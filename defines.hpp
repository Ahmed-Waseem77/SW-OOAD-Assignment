
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