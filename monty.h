<<<<<<< HEAD
<<<<<<< HEAD
#ifndef MONTY
#define MONTY
=======
#ifndef MONTY_H
#define MONTY_H
>>>>>>> origin/elie
=======
#ifndef MONTY_H
#define MONTY_H
>>>>>>> d71498c37867666000c3298274a9b7bb571f1f0e

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
<<<<<<< HEAD
<<<<<<< HEAD
        int n;
        struct stack_s *prev;
        struct stack_s *next;
=======
	int n;
	struct stack_s *prev;
	struct stack_s *next;
>>>>>>> origin/elie
=======
	int n;
	struct stack_s *prev;
	struct stack_s *next;
>>>>>>> d71498c37867666000c3298274a9b7bb571f1f0e
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
<<<<<<< HEAD
<<<<<<< HEAD
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void push(unsigned int line_number, char *str);
void pall(stack_t **head, unsigned int counter);
=======
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
>>>>>>> origin/elie
=======
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **head, unsigned int line_number);
void pint(stack_t **head, unsigned int line_number);
void pop(stack_t **head, unsigned int line_number);

int exec_handler(char *opcode, stack_t **stack, unsigned int line_number);
void free_stack(stack_t *head);
>>>>>>> d71498c37867666000c3298274a9b7bb571f1f0e

#endif
