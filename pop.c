#include "monty.h"
/**
 * fnc_pop - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void fnc_pop(stack_t **head, unsigned int counter)
{
	stack_t *he;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		fr_stack(*head);
		exit(EXIT_FAILURE);
	}
	he = *head;
	*head = he->next;
	free(he);
}
