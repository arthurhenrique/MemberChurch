CXX=g++
CPPFLAGS=-fpermissive -Wall
all: Main

Main: Person.o
	$(CXX) -o MemberChurch Main.cpp Person.o $(CPPFLAGS)

Person.o: Person.cpp Person.h
	$(CXX) -c Person.cpp $(CPPFLAGS)

clean:
	rm -f *.o MemberChurch *~
