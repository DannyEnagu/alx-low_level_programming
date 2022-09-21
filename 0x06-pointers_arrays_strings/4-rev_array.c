/**
 * reverse_array - A program to reverse an array
 *		of integers
 *
 * @a: an array of integers
 * @n: the number of element to swap
 *
 * Result: nothing
*/

void reverse_array(int *a, int n)
{
	int tmp, i;
	/*when i < quotient of n/2, update (increase i by 1)*/
	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
