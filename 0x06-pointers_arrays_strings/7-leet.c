#include "main.h"

/**
 * leet - translates string to 'leet' (= 1337) language
 * @s: input string to be translated
 * Return: string after conversion of 'leet'
 */

char *leet(char *s)
{
	int a, b;

	char letters[] = "aAeEoOtTlL";
	char leet_it[] = "4433007711";

	for (a = 0; s[a] != '\0'; a++)
		for (b = 0; b < 10; b++)
			if (s[a] == letters[b])
				s[a] = leet_it[b];
	return (s);
}


