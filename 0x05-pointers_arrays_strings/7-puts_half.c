#include "main.h"
/**
 * puts_half - print second half of str
 *
 * @str: string to cut in half & print
 *
 * Return: always void
 */
void puts_half(char *str)
{
	int len = 0, b, c;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		b = len / 2;

	else
		b = (len + 1) / 2;

	for (b = c; b < len; b++)
		_putchar(str[b]);

	_putchar('\n');
}
