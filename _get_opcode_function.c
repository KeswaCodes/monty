#include "monty.h"
/**
 *_get_opcode_function- gets the function of associated opcode
 *Return: void
 */

void _get_opcode_function(char *buffer)
{
char *opcode;

opcode = strtok(buffer, " ");
while (opcode != NULL)
{

  printf("%s\n", opcode);
  return;
 }
}
 
