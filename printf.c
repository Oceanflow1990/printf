#include "main.h"

/**
 * _printf - project to create printf function
 * @format: indentifier
 * Return: int
 */

int _printf(const char *format, ...)
{
	convert p[] = {
		{"%c", printf_char}, {"%s", printf_string}, {"%%", print_37}, {"%d", print_dec}, {"%i", print_int}, {"%r", print_rev_str}, {"%R", print_rot13}, {"%b", print_bin}, {"%u", print_unsigned}, {"%o", print_oct}, {"%x", print_hex}, {"%X", print_HEX}, {"%S", print_ex_str}, {"%p", print_pointer}
	};

	va_list args;
	int i = 0, len = 0;
	int j;

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
				len = len + p[j].function(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		_putchar(format[i]);
		i++;
		len++;
	}
	va_end(args);
	return (len);
}
