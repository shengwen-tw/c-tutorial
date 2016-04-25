PROJECT=learn_makefile
EXECUTABLE=$(PROJECT).elf

CC=gcc

CFLAGS=-I./
SRC+=main.c

all: main.o another_src.o
	@echo "Link object files"
	$(CC) $(CFLAGS) -o $(EXECUTABLE) $^
	@echo ""

main.o: main.c
	@echo "Generate object file main.o :"
	$(CC) -c $(CFLAGS) -o main.o main.c
	@echo ""

another_src.o: another_src.c
	@echo "Generate object file another_src.o :"
	$(CC) -c $(CFLAGS) -o $@ $^
	@echo ""

clean:
	rm *.o
	rm $(EXECUTABLE)


