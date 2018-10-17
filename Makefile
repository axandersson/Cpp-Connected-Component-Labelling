CXX=g++
CXXFLAGS=-g -Wall -std=c++11
PROG=labellingtest
SRC=labellingtest.cpp

all: $(PROG)

$(PROG) : $(SRC)
	$(CXX) $(CXXFLAGS) -o $(PROG) $(SRC)

clean : $(PROG)
	rm $(PROG)