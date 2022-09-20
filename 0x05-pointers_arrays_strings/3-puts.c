#include "main.h"
/**
 * _puts - puts a string follwed by a new line.
 * @str: input string
 * Return: no return
 */
void _puts(char *str)
{
	int a  = 0;

	while (str[a])
	{
		_putchar(str[a]);
	a++;
	}
	_putchar('\n');
}
