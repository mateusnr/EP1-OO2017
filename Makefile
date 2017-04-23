CXX := g++
CXXFLAGS := -std=c++11 -Wall

LNFLAG := -lncurses

SRCFILES := $(wildcard src/*.cpp)

all: $(SRCFILES:src/%.cpp=obj/%.o)
	$(CXX) $(CXXFLAGS) obj/*.o $(LNFLAG) -o bin/main

obj/%.o: src/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

.PHONY: clean

clean:
	rm obj/*
	rm bin/*

run:
	bin/main