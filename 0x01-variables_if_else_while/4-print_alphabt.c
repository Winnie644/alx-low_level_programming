#include <stdio.h>

/**
 * main -  prints the alphabet in lowercase, followed by a new line.
 * Print all the letters except q and e
 * Return: ALways 0 (success)
 */
int main(void)
{
	int ch;

	for (ch != 'q' && 'e'; ch = 'a' && ch <= 'z';)
		putchar(ch);
	putchar('\n');
	return (0);
}

