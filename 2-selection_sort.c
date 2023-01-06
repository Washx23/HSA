#include "sort.h"
/**
 * selection_sort - Sorting algorithm that requires
 * On^{2} operations to sort a list of n elements
 * @array: array
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, aux;
	int temp;


	if (array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		aux = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[aux])
			{
				aux = j;
			}
		}
		if (aux != i)
		{
			temp = array[i];
			array[i] = array[aux];
			array[aux] = temp;
			print_array(array, size);
		}
	}
}
