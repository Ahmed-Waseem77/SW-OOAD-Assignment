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
    Doctor(float, schedule);

    schedule appointments;

    void viewAppointments();

    status viewPatientMedicalRecords(patientID);
    status updatePatientMedicalRecords(patientID); 

    bool isValidAppointment(appointmentID);
    bool setAppointments(schedule newAppointments);
};

#endif // DOCTOR_HPP