#include "sort.h"
/**
 * quick_sort - sorts an array of integers in ascending order
 * @array: Array to sort
 * @size: Size of array
 * Return: N/A
 */
void quick_sort(int *array, size_t size)
{
	int c = 0;
	int d = size - 1;

	if (array == NULL || size == 0)
	{
		return;
	}
	real_sort(array, c, d, size);
}
/**
 * real_sort - sort
 * @array: array
 * @c: c
 * @d: d
 * @size: size
 * Return: N/A
 */
void real_sort(int *array, int c, int d, size_t size)
{
	int e;

	if (c < d)
	{
		e = part(array, c, d, size);
		real_sort(array, c, e - 1, size);
		real_sort(array, e + 1, d, size);
	}
}
/**
 * part - part
 * @array: array
 * @c: c
 * @d: d
 * @size: size
 * Return: f
 */
int part(int *array, int c, int d, size_t size)
{
	int e = array[d], f = c - 1, g;

	for (g = c; g <= d; g++)
	{
		if (array[g] <= e)
		{
			f++;
			if (f != g)
			{
				swap(array, f, g);
				print_array(array, size);
			}
		}
	}
	return (f);
}
/**
 * swap - Swap order
 * @array: array to swap
 * @c: pos1
 * @d: pos2
 * Return: N/A
 */
void swap(int *array, int c, int d)
{
	int save;

	save = array[c];
	array[c] = array[d];
	array[d] = save;
}
