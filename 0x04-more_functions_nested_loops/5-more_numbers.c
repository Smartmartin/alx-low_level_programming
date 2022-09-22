#include "main.h"
/**
* more_numbers - prints numbers between 0 to 14
* 10 times.
* Return: return nothing
*/
void more_numbers(void)
{
int i;
int h;

for (h = 0; h <= 9; h++)
{
	for (i = 0; i <= 14; i++)
{
if (i > 9)
{
putchar(i / 10 + '0');
}
putchar(i % 10 + '0');
}
putchar('\n');
}
}

