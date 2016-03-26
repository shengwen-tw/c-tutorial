#include <stdio.h>

#define ARRAY_SIZE 3

void main(void)
{
	int variable1 = 0;
	printf("[variable1]address = %p, value = %d\n", &variable1, variable1);

	int array[5] = {1, 2, 3};
	printf("[array]first term address = %p, first term value = %d\n", array, array[0]);

	/* Print the array with loop */
	int i;
	for(i = 0; i < ARRAY_SIZE; i++) {
		printf("array[%d] = %d, &array[%d] = %p\n", i, array[i], i, &array[i]);
	}
}
