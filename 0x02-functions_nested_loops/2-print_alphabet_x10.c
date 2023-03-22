#include "main.h"
/**
 * print_alphabet_x10 - prints a - z 10 times
 *
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	int c;
	int x;

	for (x = 0; x < 10; x++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
