#include "sort.h"
/**
 * heads - return head
 * @temp: value
 * Return: temp
 */
listint_t *heads(listint_t *temp)
{
	while (temp->prev)
	{
		temp = temp->prev;
	}
	return (temp);
}
/**
 * insertion_sort_list - sort dd linked list of integer in ascneding
 * @list: D pointer to Head in list
 * Return: N/A
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *save, *temp, *post;

	if (list == NULL)
	{
		return;
	}
	save = heads(*list);
	for (save = save->next; save; temp = save->next, save = temp)
	{
		while (save->prev && save->n < save->prev->n)
		{
			post = save->prev;
			post->next = save->next;
			save->prev = post->prev;
			post->prev = save;
			save->next = post;
			if (post->next)
			{
				post->next->prev = post;
			}
			if (save->prev)
			{
				save->prev->next = save;
			}
			print_list(heads(*list));
		}
	}
	*list = heads(*list);
}
