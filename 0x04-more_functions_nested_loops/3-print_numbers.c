#include <stdio.h>
#include "main.h"

/**
* print_numbers - function that print all numbers from 0 to 9
*
* Return: returns void
*/

void print_numbers(void)
{
int i;
for (i = '0'; i <= '9'; i++)
{
putchar(i);
}
putchar('\n');
}
