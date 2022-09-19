#include "main.h"
/**
	* print_number - that prints an integer
	* @n: print int
	* Return: Always 0
	*/
void print_number(int n)
{
	unsigned int z;
	int x;
	int y;

	y = 10;
	if (n < 10 && n >= 0)
	{
		_putchar (n + '0');
	}
	else if (n > -10 && n < 0)
	{
		n = n - 2 * n;
		_putchar ('-');
		_putchar (n + '0');
	}
	else
	{
		if (n < 0)
		{
			n = n * -1;
			_putchar ('-');
		}
		z = n;
		while (z / y > 9)
		{
			y = y * 10;
		}
		while (y > 0)
		{
			x = z / y;
			z = z % y;
			_putchar (x + '0');
			y = y / 10;
		}
	}
}
