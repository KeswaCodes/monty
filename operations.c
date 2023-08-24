#include "monty.h"
/**
 *_push- function pushes element onto stack
 *Return: void
 */

void _push(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
stack_t *new_node = malloc(sizeof(stack_t));
if (new_node == NULL)
return;

new_node->n = 15;
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
return;
  
}

void _pall(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
stack_t *temp = *stack;
  
if (temp == NULL)
return;

while (temp != NULL)
{
printf("%d\n", temp->n);
temp = temp->next;
}
}
