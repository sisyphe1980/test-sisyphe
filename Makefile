CC = gcc
SRC = $(wildcard src/*.c)
OBJ = $(SRC:.c=.o)
EXEC = prog



all : $(EXEC)


%.o : %.c
	gcc -c $< -o $@

$(EXEC) : $(OBJ)
	gcc -g -Wall $^ -o $@


clean : .
	rm -r -f $(OBJ)
mrproper : clean
	rm -r -f prog.exe