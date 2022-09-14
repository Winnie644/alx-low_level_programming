/**
 * file: 3-islower.c
 * Auth: winnie644
 */
#include "main.h"
/**
 * _islower - checks for lowercase character.
 *		if a character is a lowercase
 *		from eng alphabet
 * Return: 1 for lowercase, 0 if it's not lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
