#include "monty.h"
/**
 * fnc_pall - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void fnc_pall(stack_t **head, unsigned int counter)
{
	stack_t *he;
	(void)counter;

	he = *head;
	if (he == NULL)
		return;
	while (he)
	{
		printf("%d\n", he->n);
		he = he->next;
	}
}
