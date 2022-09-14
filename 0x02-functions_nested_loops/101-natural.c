/*
 * File: 7-print_last_digit.c
 * Auth: winnie644
 */
#include "main.h"
#include <stdio.h>
/**
 *main - check for multiples of 3 and 5
 *Return: 0 always
 */
int main(void)

{

	int x = 1024, y, sum = 0;

	for (y = 0; y < x; y++)

	{

		sum = sum + y;

		{

			sum = sum + y;

		}

	}

	printf("%d\n", sum);

	return (0);

}
