#ifndef SORT_H
#define SORT_H

/*-----------------------------Library---------------------------*/

#include <stdlib.h>
#include <stdio.h>

/*--------------------------Data Structuc------------------------*/

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

/*------------------------------Prototype--------------------------*/

void insertion_sort_list(listint_t **list);
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void quick_sort(int *array, size_t size);
void swap(int *n1, int *n2);
void bubble_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);



#endif
