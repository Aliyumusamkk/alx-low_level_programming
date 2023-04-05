#include <unistd.h>

/**
 *_putchar.c is my file
 */

int _pitchar(char c)
{
	return write(STDOUT_FILENO, &c, 1);
}
