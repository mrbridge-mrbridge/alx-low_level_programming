#include "lists.h"
/**
* delete_nodeint_at_index - deletes nth
* @head: head
* @index: index
* Return: Return
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int a = 0;
listint_t *b;
listint_t *c;

if (head == NULL || *head == NULL)
return (-1);
b = *head;
while (b != NULL)
{
if (index == 0)
{
c = *head;
*head = c->next;
free(c);
return (1);
}
if (a + 1 == index)
{
c = b->next;
b->next = c->next;
free(c);
return (1);
}
b = b->next;
a++;
}
return (-1);
}

