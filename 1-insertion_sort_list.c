#include "sort.h"
/**
 * insertion_sort_list - function that sorts a doubly linked list of
 * integers in ascending order using the Insertion sort algorithm.
 * @list: Double pointer to the head of the doubly linked list.
 * Return: 0
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp, *prev_node;

	if (!list || !(*list) || !(*list)->next)
		return;

	current = (*list)->next;

	while (current)
	{
		temp = current;
		prev_node = current->prev;

		while (prev_node && temp->n < prev_node->n)
		{

			if (temp->next)
				temp->next->prev = prev_node;
			if (prev_node->prev)
				prev_node->prev->next = temp;
			else
				*list = temp;

			prev_node->next = temp->next;
			temp->prev = prev_node->prev;

			temp->next = prev_node;
			prev_node->prev = temp;

			prev_node = temp->prev;

			print_list(*list);
		}

		current = current->next;
	}
}

