EXECUTABLE=sample.elf

all:
	gcc -g -o $(EXECUTABLE) sample.c

clean:
	rm $(EXECUTABLE)

gdbauto:
	gdb -q ./sample.elf
