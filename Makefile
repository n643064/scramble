default: build test

CC=g++
CXXFLAGS=-Wall -O3

build:
	$(CC) $(CXXFLAGS) *.cpp -o scramble

test:
	cat test1 | ./scramble
	@echo "#######################################################"
	cat test2 | ./scramble

