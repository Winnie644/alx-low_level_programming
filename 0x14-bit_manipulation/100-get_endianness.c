/**
 * get_endianness - gets the endianness of the CPU running
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int Fridah = 1;
	char *Winnie = (char *)&Fridah;

	if (*Winnie)
		return (1);
	else
		return (0);
}
