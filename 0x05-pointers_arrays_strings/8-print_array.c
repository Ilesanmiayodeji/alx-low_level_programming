#include "main.h"
#include <stdio.h>

/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @str: An input string
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');
}
