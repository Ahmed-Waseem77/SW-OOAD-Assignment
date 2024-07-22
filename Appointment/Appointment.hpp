#ifndef APPOINTMENT_HPP
#define APPOINTMENT_HPP

#include "../include/include.hpp"


struct Appointment {
        int appointmentID;

        bool isBooked;

        tm startDate;
        tm endDate;
};


#endif // APPOINTMENT_HPP