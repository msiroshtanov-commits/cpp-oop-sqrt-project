CXX = g++
CXXFLAGS = -std=c++11 -Wall

all: sqrt print_name age_calculator

sqrt: main.o root.o
	$(CXX) $(CXXFLAGS) -o sqrt main.o root.o -lm

print_name: print_name.cpp
	$(CXX) $(CXXFLAGS) -o print_name print_name.cpp

age_calculator: age_calculator.cpp
	$(CXX) $(CXXFLAGS) -o age_calculator age_calculator.cpp

main.o: main.cpp root.h
	$(CXX) $(CXXFLAGS) -c main.cpp

root.o: root.cpp root.h
	$(CXX) $(CXXFLAGS) -c root.cpp

clean:
	rm -f *.o sqrt print_name age_calculator

.PHONY: all clean