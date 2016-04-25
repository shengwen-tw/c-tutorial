#include <stdio.h>

int add(int num_a, int num_b);

int main()
{
    int num_a, num_b;

    printf("Please input 2 numbers.\n");
    scanf("%d%d",&num_a, &num_b);
    printf("The result of num_a + num_b is ");
    printf("%d\n",add(num_a, num_b));

    return 0;
}

int add(int num_a,int num_b)
{
	return num_a + num_b;
}
