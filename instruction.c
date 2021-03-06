#include "main.h"
#include <stdlib.h>

/**
 * list_instructions - a function ...
 * @head: the chaine
 * @str: the chaine
 *
 * Return: 1 or 0
 */

instruction_l **list_instrctions(instruction_l **head, char *str)
{
	char *instr = _strdup(str), *arg;
	const char *separator = ";";

	arg = _strtok(instr, separator);
	while (arg != NULL)
	{
		add_nodeinstruction_end(head, arg);
		arg = _strtok(NULL, separator);
	}
	free(instr);
	return (head);
}
