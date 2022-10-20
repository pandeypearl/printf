#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _print_int_binary - Prints a int converted to binary
 * @args: A list of variadic arguments
 * Return: The number of printed digits
 */

int _print_int_binary(va_list args)
{
	unsigned int w = 0;
	int b = 0, new = 0;

	new = va_arg(args, int);
	w = new;
	if (new < 0)
	{
		_write('1');
		new = new * -1;
		w = new;
		b += 1;
	}
	while (w > 0)
	{
		w = w / 2;
		b++;
	}

	_recursion_int_binary(new);
	return (b);
}

/**
 * _recursion_int_binary - Prints a binary
 * @a: integer to print
 */
void _recursion_int_binary(int a)
{
	unsigned int t;

	t = a;
	if (t / 2)
		_recursion_int_binary(t / 2);
	_write(t % 2 + '0');
}

