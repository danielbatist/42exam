
#include <unistd.h>

void	alpha_mirror(char *str)
{
	int	i;
	int	pos;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			pos = str[i] - 'a';
			str[i] = ('a' + 25) - pos;
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			pos = str[i] - 'A';
			str[i] = ('A' + 25) - pos;
		}
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		alpha_mirror(argv[1]);
	write(1, "\n", 1);
	return(0);
}
