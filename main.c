#include "monty.h"

/**
  * main - entry point into the code
  * @argc: argument counter
  * @argv: argument vector
  *
  * Return: Success(Always 0)
  */

int main(int argc, char *argv[])
{
	FILE *file;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (-1);
	}

	file = fopen(argv[1], "r");
	if (file == NULL)
	{
		fprintf(stderr, "Error: can't open file %s\n", argv[1]);
		return (-1);
	}

	file_parser(file);

	fclose(file);

	return (0);
}
