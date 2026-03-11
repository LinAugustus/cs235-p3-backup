CXX = g++
CXXFLAGS = -std=c++17 -Wall -Werror

# [TO-DO] List every .cpp file that should be compiled as its own object file.
#
# Example:
# SOURCES = A.cpp B.cpp ...

SOURCES = Vector3D.cpp EulerRotation.cpp AxisAngleRotation.cpp QuaternionRotation.cpp RotationRegistry.cpp
OBJECTS = $(SOURCES:.cpp=.o)

all: main

# Links main.cpp with all object files into the `main` executable.
main: main.cpp $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o main main.cpp $(OBJECTS)

# Compiles any .cpp into a .o file.
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f *.o main

rebuild: clean all