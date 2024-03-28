# Makefile to compile the application testPoint

all: testNucleus

Nucleus.o : Nucleus.cxx Nucleus.h
	g++ -std=c++11 -Wall -c Nucleus.cxx
	
readNuclei.o : readNuclei.cxx	Nucleus.h
	g++ -std=c++11 -Wall -c readNuclei.cxx

testNucleus	: Nucleus.o readNuclei.o
	g++ -std=c++11 -Wall -o testNucleus readNuclei.o Nucleus.o
# testPoint : Point.o testPoint.o 
# 	g++ -std=c++11 -Wall -o testPoint Point.o testPoint.o 


clean:  
	rm *.o

clean_all:  
	rm *.o readNucleus