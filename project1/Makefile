# Define Variables
CXX = g++#Default C++ Compilier
CXXFLAGS = -g -Wall -I ../include/

prog1: ./bin/main.o ./lib/include.a
	$(CXX) $(CXXFLAGS) ./bin/main.o ./lib/include.a -o prog1

./bin/main.o: main.cc ./include/stringReplace.h
	cd ./bin; \
	$(CXX) $(CXXFLAGS) ../main.cc -c

./lib/include.a: ./bin/stringReplace.o
	cd ./lib; \
	ar rcv include.a ../bin/*.o

./bin/stringReplace.o: ./include/stringReplace.h ./common/stringReplace.cc
	cd ./bin; \
	$(CXX) $(CXXFLAGS) ../common/stringReplace.cc -c

clean:
	cd ./bin; \
	rm stringReplace.o
	rm prog1
