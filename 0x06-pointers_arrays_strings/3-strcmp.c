#include "main.h"

/**
 * _strcmp - compares if 2 strings
 *  @s1: destination string
 *  @s2: source string to be copied
 *  Return: difference of first characters that are of diff value
 */

int _strcmp(char *s1, char *s2)
{
	char e;

	for (e = 0; s1[e] != '\0' && s2[e] != '\0'; e++)
		if (s1[e] != s2[e])
			return (s1[e] - s2[e]);
	return (0);
}
