/*
 * File: 4-isalpha.c
 * Auth: winnie644
 */

#include "main.h"
/**
 * _isalpha - this program checks wether a character
 * @c: input parameter
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

