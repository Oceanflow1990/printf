#include "main.h"

/**
 * _printf - function that selects the correct func()
 * @format: identifier to look for
 * Return: the length of the string
 */

int _printf(const char *format, ...)
{
	convert p[] = {
		{"%s", printf_string}, {"%c", printf_char}, {"%%", print_37},
		{"%i", print_int}, {"%d", print_dec}, {"%r", print_rev_str},
		{"%R", print_rot13}, {"%b", print_bin}, {"%u", print_unsigned},
		{"%0", print_oct}, {"%X", print_hex}, {"X", print_HEX}, {"%S", print_ex_str},
		{"%p", print_pointer}
	};

	va_list args;
	int i = 0, j, length = 0;

	va_start(args, format);
		if (format == NULL || (format[0] == '%' && format[1] == '\0'))
			return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (p[j].ph[0] == format[i] && p[j].ph[1] == format[i + 1])
			{
				length += p[j].function(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		length++;
		i++;
	}
	va_end(args);
	return (length);
}
