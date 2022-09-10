#include "monty.h"

/**
 * main - entry point for Monty Interpreter
 * @ac: number of arguments
 * @av: pointer to array of arguments
 * Return: 0 = success
 */
int main(int ac, char **av)
{
	FILE *fd = NULL;
	int exit_flag = EXIT_SUCCESS;

	if (ac != 2)
		return (usage_error(1));

	fd = fopen(av[1], "r");
	if (fd == NULL)
		return (open_error(av[1]));

	exit_flag = monty_run(fd);
	fclose(fd);
	return (exit_status);
	open_error(av[1]);
	monty_run(fd);
	exit(EXIT_SUCCESS);
	return (0);
}
