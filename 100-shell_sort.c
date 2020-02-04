#include "sort.h"
/**
 * shell_sort - sorts an array of integers in ascending order
 * @array: Array to sort
 * @size: Size of array
 * Return: N/A
 */
void shell_sort(int *array, size_t size)
{
	size_t c, d, e;
	int f;

	e = 1;
	if (array == NULL || size < 2)
	{
		return;
	}
	while (e <= size / 3)
	{
		e = e * 3 + 1;
	}
	while (e)
	{
		for (c = e; c < size; c++)
		{
			f = array[c];
			for (d = c; d >= e && array[d - e] > f; d = d - e)
			{
				array[d] = array[d - e];
			}
			array[d] = f;
		}
		e = (e - 1) / 3;
		print_array(array, size);
	}
}
