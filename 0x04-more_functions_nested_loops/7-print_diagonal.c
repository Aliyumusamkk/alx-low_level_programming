#include "main.h"
/**
 * print_last_digit - printing the last digit number
 *
 * @n: the int to print
 * Return: always 0
 */
int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
	{
		lastDigit = (-1 * (n % 10));
		_putchar(lastDigit + '0');
		return (lastDigit);
	}
	else
	{
		lastDigit = (n % 10);
		_putchar(lastDigit + '0');
		return (lastDigit);
	}
}
