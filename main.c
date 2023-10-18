#include "monty.h"
#include <stddef.h>  /* Include <stddef.h> for NULL definition */

int main()
{
    stack_t *stack = NULL;

    /* Push and pall example usage */
    char *opcodes[] = {"push 10", "push 20", "push 30"};
    unsigned int i;
    for (i = 0; i < 3; i++)
    {
        instruction_t instruction1;
        instruction1.opcode = opcodes[i] + 5; /* Skip "push " to get the integer */
        instruction1.f = push;
        instruction1.f(&stack, i + 1);
    }

    instruction_t instruction2;
    instruction2.opcode = "pall";
    instruction2.f = pall;
    instruction2.f(&stack, i + 1);

    return 0;
}

