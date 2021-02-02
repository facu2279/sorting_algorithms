/*
 * task 3-quick_sort.c
 * Made by Facundo Diaz to Holberton School
 * Date - 01/02/2021
 */
#include "sort.h"
/**
* quick_sort - sort function using quick sort algoritmh
* @array: array received
* @size: size of array
*/
void quick_sort(int *array, size_t size)
{
	original_quick_sort(array, 0, size - 1, size);
}

/**
 * original_quick_sort -
 */
void original_quick_sort(int *array, int lo, int hi, size_t size)
{
	int p;

	if (lo < hi)
	{
		p = partition(array, lo, hi, size);
		original_quick_sort(array, lo, p - 1, size);
		original_quick_sort(array, p + 1, hi, size);
	}
}

/**
 * partition - 
 */
int partition(int *array, int lo, int hi, size_t size)
{
	int pivot, aux, j, i;

    pivot = array[hi];
    i = lo;
    j = lo;
	for (; j <= hi; j++)
	{
		if (array[j] < pivot)
		{
			aux = array[j];
			array[j] = array[i];
			array[i] = aux;
			if (i != j)
				print_array(array, size);
			i++;
		}
	}
	aux = array[i];
	array[i] = array[hi];
	array[hi] = aux;
	if (array[hi] != pivot)
		print_array(array, size);
	return (i);
}