#include <stdio.h>
#include <stdlib.h>

/**
  * main - adds positive numbers
  * @argc: counter
  * @argv: array
  * Return: alwayes 0
  */
int main(int argc, char *argv[])
{
	int add = 0;
	char *f;

	while (--argc)
	{
		for (f = argv[argc]; *f; f++)
			if (*f < 48 || *f > 57)
				return (printf("Error\n"), 1);
		add += atoi(argv[argc]);
	}
	printf("%d\n", add);
	return (0);
}
