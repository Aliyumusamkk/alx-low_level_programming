#include <unistd.h>

/**
*_putchar - the character to be printed
*
*Return: 1 (success) or -1 (error)
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
