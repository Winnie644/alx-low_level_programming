/**
 * reverse_array - reverses an array
 *
 * @a: an array of ints
 * @n: size of array
 *
 * Return: always void
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int str;

	while (start < n - 1)
	{
		str = a[n - 1];
		a[n - 1] = a[start];
		a[start] = str;
		n--;
		start++;
	}
}
