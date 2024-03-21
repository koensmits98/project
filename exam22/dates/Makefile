# Makefile to compile the application findDate

all: findDate

Date.o : Date.cxx Date.h
	g++ -std=c++11 -Wall -c Date.cxx
	
findDate.o : findDate.cxx Date.h
	g++ -std=c++11 -Wall -c findDate.cxx
	
findDate : Date.o findDate.o 
	g++ -std=c++11 -Wall -o findDate Date.o findDate.o 

clean:  
	rm *.o

clean_all:  
	rm *.o findDate

