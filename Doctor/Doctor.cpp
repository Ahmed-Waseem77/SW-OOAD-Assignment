
#include "./Doctor.hpp"

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

bool Doctor::setAppointments(map<int, Appointment> newAppointments) {
    appointments = newAppointments;
    return true;
}
