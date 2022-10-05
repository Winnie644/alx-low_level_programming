#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies string from src to dest
 *
 * @dest: pointer to destination of string
 * @src: pointer to source string to copy from
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
