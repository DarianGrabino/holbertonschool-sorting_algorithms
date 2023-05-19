#include "sort.h"

/**
 * insertion_sort_list - sorts using the Insertion sort algorithm
 * @list: a double pointer to the head of the list
 * Return: void
*/

void insertion_sort_list(listint_t **list)
{
	listint_t *current;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
	{
		return;
	}

	current = (*list)->next;
	while (current != NULL) 
	{
		listint_t *key = current;
		listint_t *prev = current->prev;

		current = current->next;

		while (prev != NULL && key->n < prev->n) 
		{
			listint_t *next = key->next;
			listint_t *prev_prev = prev->prev;

			if (prev_prev != NULL)
			{
				prev_prev->next = key;
			}
			if (next != NULL) {
				next->prev = prev;
			}

			prev->next = next;
			prev->prev = key;
			key->next = prev;
			key->prev = prev_prev;

			if (prev == *list) {
				*list = key;
            }
			print_list(*list);
			prev = prev_prev;
        }
    }
}
