char *ft_strrev(char *str)
{
	int	i;
	int	len;
	char	tmp;

	len = 0;
	while (str[len])
		len++;
	len--;
	tmp = '\0';
	i = 0;
	while (i < len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
		i++;
		len--;
	}
	return (str);
}

#include <stdio.h>

int	main(void)
{
	char	str[] = "Hello World";
	printf("%s\n", ft_strrev(str));
	return (0);
}
