/**
 * _strncpy - copies string, up to n bytes
 *
 * @dest: destination str to copy into
 * @src: string to copy to dest
 * @n: number of bytes to copy from src
 *
 * Return: char pointer to beginning of dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;
	int counter = 0, srcLength = 0;

	while (*(src + srcLength) != '\0')
		srcLength++;
	while (*dest)
		dest++;
	if (n > srcLength)
		n = srcLength;
	while (counter < n)
	{
		*dest++ = *src++;
		counter++;
	}
	*dest = '\0';
	return (temp);
}
