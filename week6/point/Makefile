
all: testPoint

Point.o : Point.cxx Point.h
	g++ -std=c++11 -Wall -c Point.cxx
	
testPoint.o : testPoint.cxx	Point.h
	g++ -std=c++11 -Wall -c testPoint.cxx
	
testPoint : Point.o testPoint.o 
	g++ -std=c++11 -Wall -o testPoint Point.o testPoint.o 

clean:  
	rm *.o

clean_all:  
	rm *.o testPoint