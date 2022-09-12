#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int n, m;
/**/
	for (n = 0; n <= 8; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			if (n == 0 && m == 0)
			{
				continue;
			}
			putchar(m);
			putchar(n);
				if (n == 9 && m == 8)
				{
					continue;
				}
				putchar(',');
				putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
