#include "lists.h"
/**
 * pop_listint - function deletes head node of listint_t list
 * @head: pointer to pointer of head of linked list
 * Return: head node's data, or 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int info;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = temp->next;
	info = temp->n;
	free(temp);
	return (info);
}
