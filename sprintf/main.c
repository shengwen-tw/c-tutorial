#include <stdio.h>

int main(void)
{
	char *a = "Hello";
	char *b = "World";

	char buffer[100];

	sprintf(buffer, "%s %s", a, b);
	printf("%s", buffer);

	return 0;
}
