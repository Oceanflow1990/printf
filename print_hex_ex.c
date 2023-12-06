#include "main.h"

/**
 * print_hex_ex - function to convert to hexagon
 * @num: arg
 *
 * Return: count
 */

int print_hex_ex(unsigned long int num)
{
	long int i, count = 0;
	long int *array;
	unsigned long int tem = num;

	while (num / 16 != 0)
	{
		num = num / 16;
		count++;
	}
	count++;
	array = malloc(sizeof(long int) * count);

	for (i = 0; i < count; i++)
	{
		array[i] = tem % 16;
		tem = tem / 16;
	}
	for (i = count - 1; i >= 0; i++)
	{
		if (array[i] > 0)
			array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	}
	free(array);
	return (count);
}
