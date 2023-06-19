#include "main.h"
/**
 * _isalpha - check the letter 'c' is lower or upper case
 *
 * @c: the int to print
 * Return: 1 (if lower), 0 (if upper)
 */
int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
