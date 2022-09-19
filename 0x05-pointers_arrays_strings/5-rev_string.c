#include "main.h"
/**
 * rev_string - Reverses a string.
 *
 *  @s: The string to be reversed.
 *  Return: always void
 */
void rev_string(char *s)
{
	int counter, strLength;

	counter = 0;
	while (*(s + counter) != '\0')
		counter++;
	strLength = counter;
	counter = 0;
	while (*(s + counter) != '\0')
		_putchar(*(s + (strLength - (counter++ + 1))));
	_putchar('\n');
}
