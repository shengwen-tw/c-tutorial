#include <stdio.h>
#include <string.h>

int main(void)
{
	/* Array char string */
	char string1[] = {'H', 'e', 'l', 'l', 'o', '\0'};
	char string2[] = "Hello";

	/* Char pointer string */
	char *string3 = "Hello World";

	/* strlen function can show how many words the string have
	   (excluding the teminal char) */
	printf("%s -> length = %zu\n", string1, strlen(string1));
	printf("%s -> length = %zu\n", string2, strlen(string2));
	printf("%s -> length = %zu\n", string3, strlen(string3));

	/* strcmp function can do the comparision between two string */
	if(strcmp(string1, string2) == 0) {
		printf("string1 and string2 are the same\n");
	} else {
		printf("string1 and string2 aren't the same\n");
	}

	if(strcmp(string2, string3) == 0) {
		printf("string2 and string3 are the same\n");
	} else {
		printf("string2 and string3 aren't the same\n");
	}

	return 0;
}

