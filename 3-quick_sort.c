#include "sort.h"

/**
 * partition - swap alements
 * @array : the array to sort
 * @lo : lower index
 * @hi : higher index
 * @size : size of the array
 * Return: Always 0
 */


int partition(int *array, int lo, int hi, size_t size)
{
	int i, x, pivot, j;

	pivot = array[hi];
	i = lo;
	for (j = lo; j < hi; j++)
	{
		if (array[j] < pivot)
		{
			x = array[j];
			array[j] = array[i];
			array[i] = x;
			i++;
		}
	}
	x = array[i];
	array[i] = array[hi];
	array[hi] = x;
	print_array(array, size);
	return (i);
}

/**
 * quicksort - sorts an arrayusing the Quick sort algorithm
 * @array : the array to sort
 * @lo : lower index
 * @hi : higher index
 * @size : size of the array
 * Return: Always 0
 */

void quicksort(int *array, int lo, int hi, size_t size)
{
	int p;

	if (lo < hi)
	{
		p = partition(array, lo, hi, size);
		quicksort(array, lo, p - 1, size);
		quicksort(array, p + 1, hi, size);
	}
}



/**
 * quick_sort - sorts an arrayusing the Quick sort algorithm
 * @array : the array to sort
 * @size : size of the array
 * Return: Always 0
 */


void quick_sort(int *array, size_t size)
{
	if (!array || !size)
		return;

	quicksort(array, 0, size - 1, size);
}
