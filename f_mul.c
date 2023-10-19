#include "monty.h"
/**
 * fnc_mul - multiplies the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void fnc_mul(stack_t **head, unsigned int counter)
{
	stack_t *he;
	int len = 0, aux;

	he = *head;
	while (he)
	{
		he = he->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		fr_stack(*head);
		exit(EXIT_FAILURE);
	}
	he = *head;
	aux = he->next->n * he->n;
	he->next->n = aux;
	*head = he->next;
	free(he);
}
