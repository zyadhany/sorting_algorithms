#include "sort.h"

/**
 * insertion_sort_list - sort array.
 * @list: given list.
 *
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *head, *at;

	if (!list)
		return;


	head = *list;

	while (head)
	{
		at = head;

		while (at->prev)
		{
			if (at->n < at->prev->n)
			{
				at->prev->next = at->next;
				at->next = at->prev;
				at->prev = at->prev->prev;
				print_list(*list);
				continue;
			}
			break;
		}

		head = head->next;
	}
}
