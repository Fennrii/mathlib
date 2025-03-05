default: clean test

test: build
	./test.out

clean:
	rm -f *.out

build: 
	g++ -o test.out main.cpp mathlib.cpp
