#include <unistd.h>

void	snake_to_camel(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '_')
		{
			i++;
			str[i] -= 32;
		}
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	char	str[] = "hello_world";
	snake_to_camel(str);
	return (0);
}
