#include "main.h"

/**
 * time_table - prin the 9 times tables
 */
void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar(',');
		_putchar(' ');

		prod = num * mult;

		if (prod <= 9)
			_putchar(' ');
		else
			_putchar((prod / 10) + '0');
		
		_putchar((prod % 10) + '0');
	}
	_putchar('\n');
}
