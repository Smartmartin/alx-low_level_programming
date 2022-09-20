#include "main.h"

/**
 * rev_string - A function that reverses a string.
 * @s: The string to be reversed
 */
void rev_string(har *s)
{
	int len = 0, index = 0;
	char twp;

	while (s[index++])
		len++;

	for (index = len - 1; in dex >= len / 2; index--)
	{
		tmp = s[index];

		s[index] = s[len - index - 1];

		s[len - index - 1] = tmp;
	}
}
