#include "main.h"
/**
 * main - Determine if a number is positive, negetive, or zero.
(* 0 : is the number to be checked
 * Return: 0 on success
 */
void positive_or_negetive(int i)
{
	if (i < 0)
	{
	printf("%d is %s\n", i, "negetive");
	}
	else if (i > 0)
	{
	printf("%d is %s\n", i, "positive");
	}
	else
	{
	printf("%d is %s\n", i, "zero");
	}

}
