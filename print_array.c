#include "sort.h"

/**
 * print_array - funcion
 * @a: pointer
 * @n: variable in pinter
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
			break;
		}
		printf("%d, ", a[i]);
	}
	printf("\n");
}
