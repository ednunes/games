CC=g++
CFLAGS= -lm
EXEC= prog
SRC= square.cpp board.cpp main.cpp

principal:
	$(CC) -o $(EXEC) $(CFLAGS) $(SRC)

