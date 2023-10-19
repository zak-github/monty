#include "monty.h"
/**
 * fnc_pint - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void fnc_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		fr_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
