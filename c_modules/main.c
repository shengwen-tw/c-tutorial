#include <stdio.h>
#include <stdlib.h>

#include "add.h"

int main(int argc, char *argv[])
{
	if(argc < 3) {
		printf("You haven't input A and B!\n");

		return 0;
	}

	int a, b, result; 

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	add(&a, &b, &result);

	printf("%d + %d = %d\n", a, b, result);

	return 0;
}
