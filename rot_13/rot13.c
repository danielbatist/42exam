#include <unistd.h>

void	ft_rot_13(char *str)
{
	int 	i; 

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (str[i] + 13 > 'z' && str[i] + 13 > 'Z')
				str[i] -= 13;
			else
				str[i] += 13;
		}
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	i;
	if (argc == 1)
		write(1, "\n", 1);
	i = 1;
	while(i < argc)
	{
		ft_rot_13(argv[i]);
		i++;
	}
	return (0);
}
