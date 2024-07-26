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
# multithreaded
CFLAGS=-I. -std=c++11 -lpthread

DEPS := $(wildcard *.hpp) ./Doctor/Doctor.hpp ./Patient/Patient.hpp ./include/include.hpp ./Exceptions/exceptions.hpp ./Admin/Admin.hpp \
./Appointment/Appointment.hpp ./Repository/Repository.hpp ./Role/Role.hpp ./User/User.hpp ./defines.hpp

SRC := $(wildcard *.cpp) ./Doctor/Doctor.cpp ./Patient/Patient.cpp ./Admin/Admin.cpp ./Repository/Repository.cpp ./User/User.cpp
OBJ := $(SRC:.cpp=.o)


%.o: %.cpp $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

SW-OOAD-ASSIGNMENT: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

EXECUTABLE=HospitalManagementSystem

# The first rule is the default when "make" is run without arguments
all: $(EXECUTABLE)	

# Rule for linking the executable
$(EXECUTABLE): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^		

# Rule for compiling object files
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@	

# Rule for cleaning up generated files
clean:
	rm -f $(OBJS) $(EXECUTABLE)	
