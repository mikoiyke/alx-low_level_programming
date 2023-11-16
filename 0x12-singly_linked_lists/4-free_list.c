#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: list_t list to be freed
 * return: success
 */

void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
