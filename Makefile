# Makefile for publication
CXXFLAGS = 

all: executable

debug: CXXFLAGS += -g
debug: executable

rebuild: clean executable
executable: controller.o view.o library.o customer.o
	$(CXX) $(CXXFLAGS) controller.o view.o library.o customer.o
controller.o: controller.cpp library.h view.h customer.h std_lib_facilities.h
	$(CXX) $(CXXFLAGS) -w -c controller.cpp
view.o: view.cpp view.h library.h customer.h std_lib_facilities.h
	$(CXX) $(CXXFLAGS) -w -c view.cpp
library.o: library.h std_lib_facilities.h
	$(CXX) $(CXXFLAGS) -w -c library.cpp
customer.o: customer.cpp customer.h library.h std_lib_facilities.h
	$(CXX) $(CXXFLAGS) -w -c customer.cpp
clean:
	rm -f *.o a.out
