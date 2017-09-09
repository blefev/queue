main: queue.o main.cpp
	g++ -o queue main.cpp queue.o

queue.o: queue.h queue.cpp
	g++ -o queue.o -c queue.cpp

clean:
	rm *.o
