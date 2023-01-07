#include "sort.h"

/**
 * insertion_sort_list - Insertion sort is a simple sorting
 * algorithm that builds the final sorted array
 * (or list) one item at a time by comparisons.
 * @list: list to be sorted
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *aux, *cp;

	if (!list || !(*list))
		return;

	aux = *list;
	while (aux)
	{
		cp = aux->next;

		while (aux->prev && aux->n < aux->prev->n)
		{
			aux->prev->next = aux->next;

			if (aux->next)
				aux->next->prev = aux->prev;

			aux->next = aux->prev;
			aux->prev = aux->prev->prev;

			if (aux->prev)
				aux->prev->next = aux;

			aux->next->prev = aux;

			if (!aux->prev)
				*list = aux;

			print_list(*list);
		}
		aux = cp;
	}
}
