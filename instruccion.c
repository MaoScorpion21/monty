#include "monty.h"

void (int line_num, char *opcion_codigo, stack_t **h)
{
  instruction_t command[] = {
			   { "push", push },
			   { "pall", pall },
			   { NULL, NULL }
  };
  int i = 0;

 for (; command[i].opcode; i++)
   {
     if (strcmp(command[i].opcode, option_codigo) == 0)
       {
	 command[i].f(h, numero);
	 break;
       }
   }

 if (command[i].opcode == NULL)
   {
     dprintf(STDERR_FILENO, "L%d: unknown instruction %s\n", line_num, option_codigo);
     exit(EXIT_FAILURE);
   }
}
