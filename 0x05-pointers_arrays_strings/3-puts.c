#include "main.h"
/**
 * _puts - puts a string follwed by a new line.
 * @str: input string
 * Return: no return
 */
void _puts(char *str)
{
	int i = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
		putchar('\n');
		break;
		}
	_putchar(str[count]);
	count++;
	}
}