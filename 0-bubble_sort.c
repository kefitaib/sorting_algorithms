#include "sort.h"

/**
 * bubble_sort - sorts an array using the Bubble sort algorithm
 * @array : the array to sort
 * @size : size of the array
 * Return: void
 */


void bubble_sort(int *array, size_t size)
{
	int x, b;
	size_t i, s = size - 1;

	if (!array || size == 0)
		return;

	while (s > 0)
	{
		for (i = 0; i < s; i++)
		{
			b = 0;
			if (array[i] > array[i + 1])
			{
				x = array[i];
				array[i] = array[i + 1];
				array[i + 1] = x;
				b = 1;
				print_array(array, size);
			}
		}
		s--;
		if (b == 0)
			s--;
	}
}
