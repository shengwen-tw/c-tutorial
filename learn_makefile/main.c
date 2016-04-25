#include <stdio.h>

#include "another_src.h"

int main(void)
{
	printf("Hello World\n");

	int foo = add(1, 2);

	printf("1 + 2 = %d", foo);

	return 0;
}
