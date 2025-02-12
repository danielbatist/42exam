#include <stdlib.h>
#include <stdio.h>

void	do_op(int num1, char *op, int num2)
{
	int	res;

	res = 0;
	if (*op == '+')
	{
		res = num1 + num2;
		printf("%i", res);
	}
	else if (*op == '-')
	{
		res = num1 - num2;
		printf("%i", res);
	}
	else if (*op == '*')
	{
		res = num1 * num2;
		printf("%i", res);
	}
	else if (*op == '/')
	{
		res = num1 / num2;
		printf("%i", res);
	}
	else if (*op == '%')
	{
		res = num1 % num2;
		printf("%i", res);
	}
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		do_op(atoi(argv[1]), argv[2], atoi(argv[3]));
	printf("\n");
	return (0);
}
