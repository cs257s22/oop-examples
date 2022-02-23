main: main.cc animal.o legged_animal.o cat.o dog.o snake.o
	g++ main.cc animal.o legged_animal.o cat.o dog.o snake.o -o main

dog.o: dog.h dog.cc
	g++ -c dog.cc -o dog.o

cat.o: cat.h cat.cc
	g++ -c cat.cc -o cat.o

snake.o: snake.h snake.cc
	g++ -c snake.cc -o snake.o

animal.o: animal.h animal.cc
	g++ -c animal.cc -o animal.o

legged_animal.o: legged_animal.h legged_animal.cc
	g++ -c legged_animal.cc -o legged_animal.o

.PHONY: clean
clean:
	rm -f *.o
	rm -f main
