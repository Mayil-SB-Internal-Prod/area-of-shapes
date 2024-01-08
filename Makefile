all: circle triangle square

circle: circle.cpp
	g++ circle.cpp -o circle

triangle: triangle.cpp
	g++ triangle.cpp -o triangle

square: square.cpp
	g++ square.cpp -o square

clean:
	rm -f circle triangle square
