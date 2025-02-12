#include <unistd.h>

void	rostring(char *str)
{
	int	i;
	int	s;

	i = 0;
	s = 0;
	while (str[s] && (str[s] == 32 || str[s] == 9))
		s++;
	i = s;
	while(str[i] && (str[i] != 32 && str[i] != 9))
		i++;
	while (str[i] && (str[i] == 32 || str[i] == 9))
		i++;
	while(str[i])
	{
		if (str[i] == 32 || str[i] == 9)
			write(1, " ", 1);
		while (str[i] && (str[i] == 32 || str[i] == 9))
			i++;
		if (str[i] == '\0')
			break;
		write(1, &str[i], 1);
		i++;
	}
	if (str[i] != '\0')
		write(1, " ", 1);
	while(str[s] && (str[s] != 32 && str[s] != 9))
	{
		write(1, &str[s], 1);
		s++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rostring(argv[1]);
	write(1, "\n", 1);
	return (0);
}
