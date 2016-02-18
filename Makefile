# compile option
CC   = g++ -g
LINK = g++
CFLAGS = -Wall

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
%.o:   %.cpp 
	$(COMPILE.C) $< -o $@
clean:     
	-rm -f *.o $(EXE)  
.PHONY: clean
