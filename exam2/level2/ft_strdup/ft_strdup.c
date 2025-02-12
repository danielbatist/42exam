#include <stdlib.h>

char    *ft_strdup(char *src)
{
	int	i;
	char	*dst;

	i = 0;
	while(src[i])
		i++;
	dst = malloc((i + 1) * sizeof(char));
	if (!dst)
		return (NULL);
	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
