#include "sort.h"
/**
 * counting_sort - sorts an array of integers in ascending order
 * @array: array to sort
 * @size: size of the array
 **/
void counting_sort(int *array, size_t size)
{
	int cc, d, *save_arr, *tmp;
	size_t c;

	if (array == NULL || size < 2)
	{
		return;
	}
	d = array[0];
	for (c = 0; c < size; c++)
	{
		if (array[c] > d)
		{
			d = array[c];
		}
	}
	save_arr = calloc(d + 1, sizeof(save_arr));
	for (c = 0; c < size; c++)
	{
		save_arr[array[c]]++;
	}
	for (cc = 1; cc < d; cc++)
	{
		save_arr[cc + 1] += save_arr[cc];
	}
	print_array(save_arr, d + 1);
	tmp = malloc(sizeof(int) * size);
	for (c = 0; c < size; c++)
	{
		save_arr[array[c]]--;
		tmp[save_arr[array[c]]] = array[c];
	}
	for (c = 0; c < size; c++)
	{
		array[c] = tmp[c];
	}
	free(save_arr);
	free(tmp);
}
