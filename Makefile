questionb:questionb.o clock.o
	g++ -o questionb questionb.o clock.o
clock.o:clock.cpp clock.h
	g++ -c clock.cpp
questionb.o:questionb.cpp clock.h
	g++ -c questionb.cpp 

