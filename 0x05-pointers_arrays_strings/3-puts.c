#include "main.h"

/**
 * _puts - a function that print string follwed by new line
 *
 * @str: input of char
 */

void _puts(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[count]);
		count++;
	}
}

