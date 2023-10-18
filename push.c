#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

void push(stack_t **stack, unsigned int line_number)
{
    /* Check if there is an argument (integer) */
    if ((*stack) == NULL)
    {
        fprintf(stderr, "L%u: usage: push integer\n", line_number);
        exit(EXIT_FAILURE);
    }

    /* Convert the opcode to an integer */
    int data = atoi((*stack)->opcode);

    stack_t *new_node = malloc(sizeof(stack_t));
    if (new_node == NULL)
    {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }

    new_node->n = data;
    new_node->next = (*stack);
    new_node->prev = NULL;

    if ((*stack) != NULL)
        (*stack)->prev = new_node;

    (*stack) = new_node;
}

