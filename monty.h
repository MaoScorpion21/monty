#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


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

/**
 * struct global - some useful things.
 * @namefile: name of the file to read.
 * @nimbers: numbers to add to the stack.
 * @buffer: the line read by getline.
 * @com: opcode selected.
 * Description: some useful things.
 */
typedef struct global
{
  FILE *archivoM;
  char *numero;
  char *buffer;
  char *comando;
}tool

void *add_dnodeint(stack_t **head, const int n);
void *add_dnodeint_end(stack_t **head, const int n);
void instruccion(int line_num, char *opcion_codigo, stack_t **h);
void push(stack_t **h, unsigned int line_num);
int _isdigit(char *str);
void pall(stack_t **h, unsigned int times __attribute__((unused)));

#endif /*  MONTY_H */
