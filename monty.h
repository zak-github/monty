#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct bus_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
void fnc_push(stack_t **head, unsigned int number);
void fnc_pall(stack_t **head, unsigned int number);
void fnc_pint(stack_t **head, unsigned int number);
int execute_f(char *content, stack_t **head, unsigned int counter, FILE *file);
void fr_stack(stack_t *head);
void fnc_pop(stack_t **head, unsigned int counter);
void fnc_swap(stack_t **head, unsigned int counter);
void fnc_add(stack_t **head, unsigned int counter);
void fnc_nop(stack_t **head, unsigned int counter);
void fnc_sub(stack_t **head, unsigned int counter);
void fnc_div(stack_t **head, unsigned int counter);
void fnc_mul(stack_t **head, unsigned int counter);
void fnc_mod(stack_t **head, unsigned int counter);
void addnode_f(stack_t **head, int n);
void addqueue_f(stack_t **head, int n);
void fnc_queue(stack_t **head, unsigned int counter);
void fnc_stack(stack_t **head, unsigned int counter);
#endif

