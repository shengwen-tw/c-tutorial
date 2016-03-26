#include <stdio.h>

int main(void)
{
	int *pointer;

	int var1 = 5;

	pointer = &var1;

	/* Single variable test */
	printf("Pointer is point to the var1 variable:\n");
	printf("var1 address = %p, var1 value = %d\n", &var1, var1);
	printf("Pointer is point to address %p, value is equal to %d\n", pointer, *pointer);

	/* Array test */
	int array[5] = {1, 2, 3, 4, 5};
	pointer = array;

	printf("\nPointer is now point to the array:\n");
	int i;
	for(i = 0; i < 5; i++) {
		printf("array[%d] = %d\n", i, *(pointer + i));
	}

	return 0;
}
