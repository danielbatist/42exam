char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;

	if (!s1 || !s2)
		return (0);
	while (*s1)
	{
		i = 0;
		while (s2[i])
		{
			if (*s1 == s2[i])
				return ((char *)s1);
			i++;
		}
		s1++;
	}
	return (0);
}

#include<stdio.h>
#include<string.h>

int	main(void)
{
	//printf("%s\n", strpbrk("heave", "world"));
	printf("%s\n", ft_strpbrk("heave", "world"));
	return (0);
}
