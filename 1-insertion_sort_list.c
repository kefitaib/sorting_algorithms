#include "sort.h"

/**
 * insertion_sort_list - sorts doubly linked list using the Insertion algorithm
 * @list: doubly linked list of integer
 *
 * Return: Void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *c, *p, *n, *l;

	if (!*list || !(*list)->next)
		return;

	l = (*list)->next;
	while (l)
	{
		c = l;
		p = c->prev;
		n = c->next;
		l = l->next;

		while (p)
		{
			if (c->n < p->n)
			{
				if (n)
					n->prev = p;
				p->next = n;
				c->next = p;
				if (p->prev)
					p->prev->next = c;
				c->prev = p->prev;
				p->prev = c;
				if (!c->prev)
					*list = c;
				print_list(*list);
				n = p;
				p = c->prev;
			}
			else
				break;
		}
	}
}
