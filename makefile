CXX = g++
CXXFLAGS = -g -std=c++11 -Wall -W -Werror -pedantic

user: main.o user.o
	$(CXX) -o user main.o user.o

main.o: main.cpp user.h

user.o: user.cpp user.h

clean:
	rm -f *.o user
