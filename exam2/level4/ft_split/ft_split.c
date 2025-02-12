#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (src[i] && i <= n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	**ft_split(char *str)
{
	int	i;
	int	start;
	int	count_word;
	int	word;
	char	**res;

	i = 0;
	while(str[i])
	{
		while (str[i] && (str[i] == 32 || str[i] == 9 || str[i] == 10))
			i++;
		if (str[i] != 32 && str[i] != 9 && str[i] != 10)
			count_word++;
		while (str[i] && (str[i] != 32 && str[i] != 9 && str[i] != 10))
			i++;
	}
	res = (char **)malloc((count_word + 1) * sizeof(char *));
	if(!res)
		return (NULL);
	i = 0;
	word = 0;
	start = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == 32 || str[i] == 9 || str[i] == 10))
			i++;
		start = i;
		while (str[i] && (str[i] != 32 && str[i] != 9 && str[i] != 10))
			i++;
		if (i > start)
		{
			res[word] = (char *)malloc(((i - start) + 1) * sizeof(char));
			if(!res)
				return (NULL);
			ft_strncpy(res[word], &str[start], i - start);
			word++;
		}
	}
	res[word] = NULL;
	return (res);
}

#include <stdio.h>
int	main(void)
{
	int	i;
	char	**res;
	char	str[] = "three words apart";

	res = ft_split(str);
	i = 0;
	while (res[i])
	{
		printf("%s\n", res[i]);
		i++;
	}
	return (0);
}
