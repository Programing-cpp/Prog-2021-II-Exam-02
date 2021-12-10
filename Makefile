CXX=g++
CXXFLAGS=-std=c++17 -fsanitize=undefined -fsanitize=signed-integer-overflow -fsanitize=address -g

EXECUTABLES := $(patsubst %.cpp,%.x,$(wildcard *.cpp))

all : $(EXECUTABLES)
%.x : %.cpp
	$(CXX)  $(CXXFLAGS) $< -o $@





clean:
	rm -rf *.x a.out *.x.*
