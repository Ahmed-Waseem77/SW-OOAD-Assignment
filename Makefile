#   Design Template for a simple Hospital Management System.
#   Copyright (C) 2024  Mahmoud Raslan, Ahmed Raslan

#   This program is free software; you can redistribute it and/or modify
#   it under the terms of the GNU General Public License as published by
#   the Free Software Foundation; either version 2 of the License, or
#   (at your option) any later version.

#   This program is distributed in the hope that it will be useful,
#   but WITHOUT ANY WARRANTY; without even the implied warranty of
#   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#   GNU General Public License for more details.

#   You should have received a copy of the GNU General Public License along
#   with this program; if not, write to the Free Software Foundation, Inc.,
#   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

CC=g++
CFLAGS=-I. -std=c++11 
DEPS = ./Doctor/Doctor.hpp ./Patient/Patient.hpp ./include/include.hpp ./Exceptions/expections.hpp ./Admin/Admin.hpp \
./Appointment/Appointment.hpp ./Repository/Repository.hpp ./Role/Role.hpp ./User/User.hpp defines.hpp 
OBJ = main.o Doctor.o Patient.o Admin.o Appointment.o Repository.o Role.o User.o \
exceptions.o 

%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

SW-OOAD-ASSIGNMENT: $(OBJ) # Replace your_project_name with the actual name
	$(CC) -o $@ $^ $(CFLAGS)