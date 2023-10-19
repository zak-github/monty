#include "monty.h"
/**
* execute_f - executes the opcode
* @stack: head linked list - stack
* @counter: line_counter
* @file: poiner to monty file
* @content: line content
* Return: no return
*/
int execute_f(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
				{"push", fnc_push}, {"pall", fnc_pall}, {"pint", fnc_pint},
				{"pop", fnc_pop},
				{"swap", fnc_swap},
				{"add", fnc_add},
				{"nop", fnc_nop},
				{"sub", fnc_sub},
				{"div", fnc_div},
				{"mul", fnc_mul},
				{"mod", fnc_mod},
				{"queue", fnc_queue},
				{"stack", fnc_stack},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(content);
		fr_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
