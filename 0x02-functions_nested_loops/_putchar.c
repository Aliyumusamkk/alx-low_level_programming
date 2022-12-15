#include "main.h"
#include <unstd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * return: On suceess 1.
 * On error, -1 is returned, and erro is set appropriatly.
 */
int _putchsr(char c)
{
	return (write(1, &c, 1));
}
