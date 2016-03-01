# compile option
CC   = g++
LINK = g++
CFLAGS = -g -Wall

# -------------

COMPILE.C  = $(CC) -c 
##### other path except current path
#VPATH   = ../ : aa/bb
#vpath %.h ../headers
#vpath %.c ../src1
#vpath % ../src2
#vpath %.c ../src3

CXXFLAGS  =  -lgcc_s 
MAKEEXE   = $(CC) $(LDFLAGS)

########################## modify here
OBJ   = test1.o test.o
EXE   = out

all:   $(EXE)

$(EXE):   ${OBJ}
	$(MAKEEXE) $^ -o $@
#%.o:   %.cpp 
#	$(COMPILE.C) $< -o $@
test.o:  test.cpp Sales_data.h  
	$(COMPILE.C) test.cpp
test1.o: test1.cpp global.hpp
	$(COMPILE.C) test1.cpp

clean:     
	-rm -f *.o *.s $(EXE)  
.PHONY: clean
