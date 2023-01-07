#ifndef SORT_H
#define SORT_H
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stddef.h>
#include <stdarg.h>
#include <unistd.h>
#include <signal.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;
void bubble_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void print_array(int *a, int n);
void quick_sort(int *array, size_t size);
void print_list(const listint_t *list);
void swap(int *a, int *b);
void quick_aux(int *array, size_t size, int min, int max);
int quick_mix(int *array, size_t size, int min, int max);
#endif
