#include"main.h"
/**
 * print_number - Prints and integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
	unsigned int num;
	
	if (n < 0)
	{
		 _putchar('-');
		 n = -n;
		 num = n;
	}
	
	num = n;
	if (num / 10)
		print_number(num / 10);

	_putchar(num % 10 + '0');
}
