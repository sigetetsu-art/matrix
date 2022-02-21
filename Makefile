CC = g++
CFLAG = -O4 -Wall

all: matrix

gauss_method: matrix.cpp
						$(CC) $(CFLAG) matrix.cpp -o matrix

clean:
		rm -f matrix *.o*~