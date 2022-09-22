/**
 *_strncpy - copies string, up to n bytes
 *
 * @dest: destination str to copy into
 * @src: string to copy to dest
 * @n: number of bytes to copy from src
 *
 * Return: char pointer to beginning of dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[j] = src[j];
	for (; j < n; j++)
		dest[i] = '\0';
	return (dest);
}
