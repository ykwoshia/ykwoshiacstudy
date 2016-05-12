# I am a comment, and I want to say that the variable CC will be
# the compiler to use.
CC=g++
# Hey!, I am comment number 2. I want to say that CFLAGS will be the
# options I'll pass to the compiler.
CFLAGS=-c -std=c++11 -Wall

all: out

out: test.o
	$(CC) test.o -o out

test.o: test.cpp
	$(CC) $(CFLAGS) test.cpp



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
