#include "lists.h"
/**
* free_listint2 - free
* @head: head
* Return: 0
*/
void free_listint2(listint_t **head)
{
listint_t *b;

while (*head)
{
b = *head;
*head = (*head)->next;
free(b);
}
*head = NULL;
}
