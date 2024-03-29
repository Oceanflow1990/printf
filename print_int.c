#include "main.h"

/**
 * print_int - prints integer
 * @args: argument of print
 *
 * Return: numbers of charactres printed
 */

int print_int(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit, exp = 1;
	int i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num =  n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}

	}
	_putchar(last + '0');

	return (i);
}

#include "main.h"

/**
 * print_dec - prints decimal
 * @args: argument
 *
 * Return: 1
 */
int print_dec(va_list args)
{
	int n = va_arg(args, int);
	int num, last = n % 10, digit;
	int exp = 1;
	int i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num =  n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}

	}
	_putchar(last + '0');

	return (i);
}
