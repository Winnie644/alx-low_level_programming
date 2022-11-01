#include "main.h"

/**
 * get_bit - gets a bit, 1 or 0, at index
 * @n: number to get bit from
 * @index: index to find bit at
 *
 * Return: 1 or 0 depending if bit is lit or not
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;
	return (bit_val);
}
