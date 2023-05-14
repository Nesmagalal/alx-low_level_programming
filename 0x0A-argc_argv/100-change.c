#include <stdio.h>
#include <stdlib.h>
/**
  * main - prints the number of arguments passed into it
  * @argc: counter
  * @argv: array
  * Return: alwayes 0
  */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int f, res = 0, money = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (f = 0; f < 5; f++)
		{
			if (money >= cents[f])
			{
				res += money / cents[f];
				money = money % cents[f];
				if (money % cents[f] == 0)
				{
					break;
				}
			}

		}
		printf("%d\n", res);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		return (0);
}
