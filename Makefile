compiler = g++
flags = -Wall -o
program = parkingServices.out

all: ${program}

${program}: parkingServices.cpp LowEmission.cpp Moped.cpp Motorcycle.cpp Professor.cpp Student.cpp Visitor.cpp Car.cpp Vendor.cpp
	${compiler} parkingServices.cpp LowEmission.cpp Moped.cpp Motorcycle.cpp Professor.cpp Student.cpp Visitor.cpp Car.cpp Vendor.cpp ${flags} ${program}

run: ${program}
	./${program}

clean:
	rm *.out
