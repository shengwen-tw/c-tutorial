EXECUTABLE=sample.elf

all:
	gcc -g -o $(EXECUTABLE) sample.c

clean:
	rm $(EXECUTABLE)

gdbserver:
	gdbserver :3333 ./sample.elf

gdbauto:
	gdb -q ./sample.elf

cgdb:
	cgdb -x gdbauto.gdb
