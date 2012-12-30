test: test.o desktop.o laptop.o pad.o computer.o
	g++ test.o desktop.o laptop.o computer.o pad.o -o test

test.o: test.cpp desktop.h laptop.h pad.h computer.h
	g++ -c test.cpp

desktop.o: desktop.cpp computer.cpp computer.h desktop.h 
	g++ -c desktop.cpp

laptop.o: laptop.cpp computer.cpp computer.h laptop.h
	g++ -c laptop.cpp

pad.o: pad.cpp computer.cpp computer.h pad.h
	g++ -c pad.cpp

computer.o: computer.cpp computer.h
	g++ -c computer.cpp
