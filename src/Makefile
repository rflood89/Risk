# Makefile for Risk remake

CC = g++
CC_FLAGS = -I. `wx-config --cxxflags`
CC_LIBS = `wx-config --libs`

CC_SRC = $(wildcard *.cpp)

# Release
CC_REL_OBJ = $(patsubst %.cpp, ../bin/%.o, $(CC_SRC))
CC_REL_OUT = ../bin/Risk

# Debug
CC_DBG_OBJ = $(patsubst %.cpp, ../bin/%_d.o, $(CC_SRC))
CC_DBG_OUT = ../bin/Risk_debug

.PHONY : all

all : 
	@echo "Risk: Specify a build. release, debug or clean"

release : $(CC_REL_OUT)
	@echo "Risk: [release]  $(CC_REL_OUT) was built successfully"

run_rel : $(CC_REL_OUT)
	@echo "Risk: Executing $(CC_REL_OUT)"

debug : $(CC_DBG_OUT)
	@echo "Risk: [debug] $(CC_DBG_OUT) was built successfully"

run_dbg : $(CC_DBG_OUT)
	@echo "Risk: Executing $(CC_DBG_OUT)"

# Release
$(CC_REL_OUT) : $(CC_REL_OBJ)
	$(CC) $^ -o $@ $(CC_LIBS)

../bin/%.o : %.cpp
	$(CC) $< -c -o $@ $(CC_FLAGS)

# Debug
$(CC_DBG_OUT) : $(CC_DBG_OBJ)
	$(CC) $^ -o $@ $(CC_LIBS)

../bin/%_d.o : %.cpp
	$(CC) $< -g -c -o $@ $(CC_FLAGS)

.PHONY : clean

clean : 
	@rm -f ../bin/*.o $(CC_REL_OUT) $(CC_DBG_OUT)
	@echo "Risk: Cleanned all generated files"

