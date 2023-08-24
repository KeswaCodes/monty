#include "monty.h"
/**
 *_push- function pushes element onto stack
 *Return: void
 */

void _push(stack_t **stack, unsigned int line_number)
{
stack_t *new_node = malloc(sizeof(stack_t));
int value;

if (new_node == NULL)
return;
value = atoi(data.opcode_value);
if (value == 0)
{
fprintf(stderr, "L<%d>: usage: push integer\n", line_number);
exit(EXIT_FAILURE);
}
new_node->n = value;
new_node->next = NULL;
new_node->prev = NULL;

if (*stack == NULL)
{
*stack = new_node;
return;
}

(*stack)->prev = new_node;
new_node->next = *stack;
*stack = new_node;

 printf("%d\n", value);
return;
  
}

void _pall(stack_t **stack, unsigned int line_number)
{
stack_t *temp = *stack;

if (temp == NULL)
{
fprintf(stderr, "L<%d>: unknown instruction <opcode>\n", line_number);
}
while (temp != NULL)
{
printf("%d\n", temp->n);
temp = temp->next;
}
}
