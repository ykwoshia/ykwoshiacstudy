# I am a comment, and I want to say that the variable CC will be
# the compiler to use.
CC=g++
# Hey!, I am comment number 2. I want to say that CFLAGS will be the
# options I'll pass to the compiler.
CFLAGS=-c -Wall

all: out

out: test.o test1.o
	$(CC) test.o test1.o -o out

test.o: test.cpp Sales_data.h
	$(CC) $(CFLAGS) test.cpp

test1.o: test1.cpp global.hpp
	$(CC) $(CFLAGS) test1.cpp


clean:
	rm *.o out


########################################################################
#CC=g++
#CFLAGS=-c -Wall
#LDFLAGS=
#SOURCES=test.cpp test1.cpp
#OBJECTS=$(SOURCES:.cpp=.o)
#EXECUTABLE=out
#
#all: $(SOURCES) $(EXECUTABLE)
#    
#$(EXECUTABLE): $(OBJECTS) 
#	$(CC) $(LDFLAGS) $(OBJECTS) -o $@
#
#.cpp.o:
#	$(CC) $(CFLAGS) $< -o $@
