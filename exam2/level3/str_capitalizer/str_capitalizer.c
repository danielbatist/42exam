#include <unistd.h>

void	str_capitalizer(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[0] >= 'a' && str[0] <= 'z')
			str[i] -= 32;
		if ((str[i] >= 'a' && str[i] <= 'z') && (str[i - 1] == 32 || str[i - 1] == 9))
			str[i] -= 32;
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}
int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 1)
		write(1, "\n", 1);
	while (i < argc)
	{
		str_capitalizer(argv[i]);
		i++;
	}
	return (0);
}
