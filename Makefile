.PHONY:clean mrproper install run
EXE=prog
CC = GCC
CFLAGS = -O4 -g -Wall
USER:=$(shell whoami)

all:$(EXE) clean install 

$(EXE):src/main.o
	$(CC) $(CFLAGS) $^ -o $@

%.o : %.c
	$(CC) -c $< -o $@

run:
	./bin/prog.exe

install:
	@echo $(USER)
	mv prog.exe bin
	make -C bin/ install

clean:
	rm -r -f src/*.o
mrproper:clean
	rm -r -f bin/prog.exe
