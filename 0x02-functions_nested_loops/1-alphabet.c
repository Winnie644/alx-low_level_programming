/*
 * File: 1-alphabet.c
 * Auth: Winnie644
 */
#include "main.h"
/**
 * print_alphabet -This program prints
 *		 the english alphabet from a-z.
 * Return: Void.
 */
void print_alphabet(void);
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
