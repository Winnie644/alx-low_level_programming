#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int n, m, l;
/**/
	for (n = 0; n <= 8; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			if(n == 0 && m == 0)
			{
				continue
			}
			putchar(n);
			putchar(m);
				if (m == 0 && n == 8)
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
