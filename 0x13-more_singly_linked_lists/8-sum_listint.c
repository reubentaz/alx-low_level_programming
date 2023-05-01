#include "lists.h"
#include <stdlib.h>

/**
  * sum_listint- sum of data (n) int a list
  * @head: address of first node
  * Return: Integer
  */
int sum_listint(listint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
