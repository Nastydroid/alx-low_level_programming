#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - this print all natural numbers down to 98
 *
 * @n: takes an integer input
 *
 *
 */

void print_to_98(int n)
{
	while (n > 98)
	{
		putchar(',');
		putchar(' ');
		printf("%d", n);
		n--;
	} do
	{
		putchar(',');
		putchar(' ');
		printf("%d", n);
		n++;
	} while (n < 99);

}
