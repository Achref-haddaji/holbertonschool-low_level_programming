#include "lists.h"

/**
 * listint_len - number of elements in linked list
 * @h: pointer to a linkedlist
 * Return: the length of the linkedlist
 */
size_t listint_len(const listint_t *h)
{
	size_t f = 0;

	while (h)
	{
		f++;
		h = h->next;
	}
	return (f);
}
