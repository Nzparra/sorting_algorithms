#include "sort.h"
/**
 * bubble_sort - sort array of integer in ascneding
 * @array: Array to sort
 * @size: Size of array
 * Return: N/A
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int save;

		if (size == 0 || array == NULL)
		{
			return;
		}
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
			if (array[j] > array[j + 1])
			{
				save = array[j + 1];
				array[j + 1] = array[j];
				array[j] = save;
				print_array(array, size);
			}
	}
}
