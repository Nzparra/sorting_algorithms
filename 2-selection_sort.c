#include "sort.h"
/**
 * selection_sort - sort array of integers in ASC ORDER
 * @array: The array to sort
 * @size: size of the array
 * Return: N/A
 */
void selection_sort(int *array, size_t size)
{
	size_t c, d, num;
	int tmp;

	if (size == 0 || array == NULL)
	{
		return;
	}
	for (c = 0; c < size - 1; c++)
	{
		num = c;
		for (d = c; d < size; d++)
		{
			if (array[d] < array[num])
			{
				num = d;
			}
		}
		if (c != num)
		{
			tmp = array[c];
			array[c] = array[num];
			array[num] = tmp;
			print_array(array, size);
		}
	}
}
