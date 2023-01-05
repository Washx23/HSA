#include "sort.h"
#include <stdio.h>
/**
 * bubble_sort - is a simple sorting algorithm that
 * repeatedly steps through the input list element
 * by element, comparing the current element with
 * the one after it, swapping their values if needed
 * @array: what they give me to order
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	int aux;
	size_t i, j;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				aux = array[j + 1];
				array[j + 1] = array[j];
				array[j] = aux;
				print_array(array, size);
			}
		}
	}
}
