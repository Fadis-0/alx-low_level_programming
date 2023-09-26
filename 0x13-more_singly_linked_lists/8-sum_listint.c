#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n) of
 * a linked list.
 * @head: head of the list.
 *
 * Return: sum of tof nodes data (n).
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
