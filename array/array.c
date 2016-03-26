#include <stdio.h>

/* Please pratice your English :) */

int main(void)
{
	int array1[5] = {0}; //All initialize to 0
	int array2[5]; //Not initialized yet
	int array3[5] = {1, 2, 3, 4, 5}; //Initialize all terms by assinging the value

	printf("First term of the array 1 = %d\n", array1[0]); //Fist term is 0
	printf("Last term of the array 1 = %d\n", array1[4]); //Not array[5], count from 0 to 4!

	/* Use sizeof opeartor to calculate the array size */
	int array_size = sizeof(array1) / sizeof(array1[0]); //The whole array divided by a single term is equal to the size

	int i; //C89 for loop
	for(i = 0; i < array_size; i++) {
		printf("array3[%d] = %d\n", i, array3[i]); //print every term
	}

	return 0;
}
