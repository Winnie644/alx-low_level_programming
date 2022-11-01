#include "main.h"
/**
 * clear_bit - sets a bit at given index to 0
 * @n: number to set bit in
 * @index: index to set bit at
 *
 * Return: 1 if it worked, or -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
