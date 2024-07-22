#ifndef DOCTOR_HPP
#define DOCTOR_HPP

#include "../include/include.hpp"
#include "../User/user.hpp"
#include "../Appointment/Appointment.hpp"
#include "./defines.hpp"

class Doctor : public User {

private:
    float salary;
    
public:
    map<appointmentID, Appointment> appointments;

    void viewAppointments();

    status viewPatientMedicalRecords(patientID);
    status updatePatientMedicalRecords(patientID); 

    bool isValidAppointment(appointmentID);
    bool setAppointments(map<int, Appointment> newAppointments);
};

#endif // DOCTOR_HPP