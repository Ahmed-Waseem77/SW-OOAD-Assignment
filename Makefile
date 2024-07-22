
CXX=g++

CXXFLAGS=-Wall -g

INCLUDES=-I./include -I./Doctor -I./Patient -I./Appointment -I./User

SOURCES=main.cpp

TARGET=main

$(TARGET): $(SOURCES)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SOURCES)

# .PHONY rule for make clean
.PHONY: clean
clean:
	rm -f $(TARGET)