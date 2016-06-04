CPPUNIT_PATH=./

LIB_DIR=$(CPPUNIT_PATH)/lib
CPPFLAGS=-fpermissive -Wall
all: Main

Main: Person.o
	g++ -o MemberChurch Main.cpp Person.o $(CPPFLAGS)

Person.o: Person.cpp Person.h
	g++ -c Person.cpp $(CPPFLAGS)

clean:
	rm -f *.o MemberChurch *~
