#include <stdio.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	int	i;
	int	j;
	int	res;
	int	tmp;

	tmp = 0;
	res = 0;
	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (accept[j] == s[i])
			{
				res += 1;
				break;
			}
			j++;
		}
		if (res == tmp)
			return (res);
		tmp = res;
		i++;
	}
	return (res);
}


#include <string.h>

int	main(void)
{
	printf("%li\n", strspn("0123456hello", "0123456789"));
	printf("%li\n", ft_strspn("0123456hello", "0123456789"));
	return (0);
}
