CC = g++
FLAGS = -std=c++14 -Wall -g
OBJS = Date.o Employee.o Programmer.o SoftwareArchitect.o

all: hw03

hw03: hw03.cpp hw03.o
	$(CC) $(FLAGS) hw03.cpp -o hw03 $(OBJS)

hw03.o: Header.h hw03.cpp Date.o
	$(CC) $(FLAGS) -c hw03.cpp -o hw03.o

Date.o: Date.h Date.cpp Employee.o
	$(CC) $(FLAGS) -c Date.cpp -o Date.o

Employee.o: Employee.h Employee.cpp Programmer.o SoftwareArchitect.o
	$(CC) $(FLAGS) -c Employee.cpp -o Employee.o

SoftwareArchitect.o: SoftwareArchitect.h SoftwareArchitect.cpp
	$(CC) $(FLAGS) -c SoftwareArchitect.cpp -o SoftwareArchitect.o

clean:
	rm*.0 hw03 hw03.tar

tar:
	tar cf hw03.tar hw03.scr Makefile hw03.cpp Date.cpp Date.h Employee.cpp Employee.h Programmer.cpp Programmer.h SoftwareArchitect.cpp SoftwareArchitect.h

