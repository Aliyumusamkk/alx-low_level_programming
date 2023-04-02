#include <stdio.h>
/**
 * main - sums the multiple of 3 and 5
 *
 * Return: Always 0
 */
int main(void)
{
	int a;
	int b;
	int sum;

	b = 1024;
	sum = 0;
	for (a = 0; a <= b; a++)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			sum = sum + a;
		}
		else
		{
			continue;
		}
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}
