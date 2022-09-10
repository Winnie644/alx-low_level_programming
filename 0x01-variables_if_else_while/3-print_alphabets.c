#include <stdio.h>

/**
 * main -  prints the alphabet in lowercase, and then in uppercase
 * followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int ew;
	/**/
	for (ew = 'a'; ew <= 'z'; ew++)
		putchar(ew);
	for (ew = 'A'; ew <= 'Z'; ew++)
		putchar(ew);
	putchar ('\n');
	return (0);
}
