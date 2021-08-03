#include "lists.h"
/**
* print_listint - prints data
* @h: head
* Return: return
*/
size_t print_listint(const listint_t *h)
{
size_t a = 0;
while (h)
{
printf("%d\n", h->n);
h = h->next;
a++;
}
return (a);
}
