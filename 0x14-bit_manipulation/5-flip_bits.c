/**
 * flip_bits - gets number of bits needed to flip for n to equal m
 * @n: number to see how many bit flips are needed to equal m for
 * @m: number to set other to equal given bit flips
 *
 * Return: number of bit flips needed for one number to equal the other
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
