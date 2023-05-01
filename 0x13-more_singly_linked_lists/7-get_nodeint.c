#include "lists.h"
#include <stdlib.h>

/**
  * get_nodeint_at_index - find a node in alist
  * @head: addresss of the first node
  * @index: position of the node
  * Return: node address
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int y = 0;

	if (head == NULL)
		return (NULL);
	for (y = 0; y < index; y++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
