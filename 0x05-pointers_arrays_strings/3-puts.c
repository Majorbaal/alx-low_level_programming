#include "main.h"
/**
 * _puts - function that prints a string
 * @str: the string
 * return: the length of the string
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_Putchar('\n');
}
