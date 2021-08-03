#include "lists.h"
/**
* free_listint_safe - frees the list
* @h: head
* Return: number
*/
size_t free_listint_safe(listint_t **h)
{
size_t a;
listint_t *b;

a = 0;
if (!h)
return (a);
while (*h && *h > (*h)->next)
{
b = *h;
*h = (*h)->next;
free(b);
a++;
}
if (*h)
{
free(*h);
*h = NULL;
a++;
}
return (a);
}

