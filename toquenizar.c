#include "monty.h"

void toquenizar(char *buffer)
{
  tools.comando = strtok(buffer, "\t\n ");
  tools.numero = strtok(NULL, "\t\n ");
}
