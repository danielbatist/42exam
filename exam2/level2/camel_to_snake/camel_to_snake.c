#include <unistd.h>
#include <stdlib.h>

void	camel_to_snake(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			write(1, "_", 1);
			str[i] += 32;
		}
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(void)
{
	char	str[] = "hereIsACamelCaseWord";
	camel_to_snake(str);
	return (0);
}
