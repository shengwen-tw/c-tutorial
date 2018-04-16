#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char s[1000] = {'\0'};

	printf("Please input array size: ");

	int size;
	scanf("%d", &size);

	int *arr = (int *)malloc(sizeof(int) * size);

	int len = 0;

	int i;
	for(i = 0; i < size; i++) {
		arr[i] = i;
		len += sprintf(s + len, "%d\n", arr[i]);
	}

	printf("%s", s);

	free(arr);

	return 0;
}
