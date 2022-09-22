#include "main.h"

/**
 *  _strncpy - copies string from source to destination
 *  @dest: destination string
 *  @src: source string to be copied
 *  @n: bytes to be copied from source string
 *  Return: destination string concatenated
 */

char *_strncpy(char *dest, char *src, int n)
{
	int e;

	for (e = 0; e < n && src[e] != '\0'; e++)
		dest[e] = src[e];
	for (; e < n; e++)
		dest[e] = '\0';
	return (dest);
}
