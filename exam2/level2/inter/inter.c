#include <unistd.h>

void	inter(char *str1, char *str2)
{
	int	i;
	int	j;
	int	ascii[256] = {0};

	i = 0;
	while (str1[i])
	{
		j = 0;
		while (str2[j])
		{
			if (str1[i] == str2[j] && ascii[(unsigned char)str1[i]] == 0)
			{
				write(1, &str1[i], 1);
				ascii[(unsigned char)str1[i]] = 1;
				break;
			}
			j++;
		}
		i++;
	}

}

int	main(int argc, char **argv)
{
	if (argc == 3)
		inter (argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
