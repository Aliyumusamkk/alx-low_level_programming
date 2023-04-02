#include <stdio.h>
/**
 * main - main block
 * Description: Print the first 50 fibonacci numbers, starting with 1 and 2
 * Numbers must be coma and space separated.
 * Return: Always 0
 */
int main(void)
{
	int count;
	unsigned long a = 1;
	unsigned long b = 1;
	unsigned long c;

	printf("%lu, ", a);
	for (count = 1; count < 50; count++)
	{
		c = a + b;
		printf("%lu", c);
		a = b;
		b = c;
		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
