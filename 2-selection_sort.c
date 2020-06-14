#include "sort.h"

/**
 * selection_sort - sorts an array using the Selection sort algorithm
 * @array : the array to sort
 * @size : size of the array
 * Return: Void
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, k;
	int x;

	if (!array || !size)
		return;

	for (i = 0; i < size; i++)
	{
		x = array[i];
		k = i;
		for (j = i + 1; j < size; j++)
		{
			if (x > array[j])
			{
				x = array[j];
				k = j;
			}
		}
		if (k != i)
		{
			x = array[i];
			array[i] = array[k];
			array[k] = x;
			print_array(array, size);
		}
	}
}
