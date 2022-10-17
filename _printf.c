#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: format string that conatains the characters and specifiers
 * Description: function will call get_print() function
 * which determines which printing function to call
 * depending on the conversion specifiers contained into fmt
 * Return: length of the formatted output string
 */

int _printf(const char *format, ...)
{
	va_list args;
	int length = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	length = _print_format(format, args);
	va_end(args);
	return (length);
}
