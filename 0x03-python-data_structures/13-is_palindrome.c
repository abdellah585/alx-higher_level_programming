#include "lists.h"

/**
 * is_palindrome - check if a singly linked list is a palindrome
 * @head: pointer to head of the list
 * 
 * Return: 1 if list is a palindrome, else 0
 */

int is_palindrome(listint_t **head)
{
	listint_t *current = *head;
	int values[2048], i = 0, j;

	if (*head == NULL || (*head)->next == NULL)
		return (1);

	while (current)
	{
		values[i] = current->n;
		current = current->next;
		i++;
	}

	for (j = 0; j < i / 2; j++)
	{
		if (values[j] != values[i - j - 1])
			return (0);
	}

	return (1);
}
