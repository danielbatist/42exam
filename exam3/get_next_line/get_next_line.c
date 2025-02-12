#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}
char	*ft_strjoin(char *s1, char *s2)
{
	int	i;
	int	j;
	int	size;
	char	*res;

	if (!s2)
		return (NULL);
	if (!s1)
	{
		s1 = malloc(1);
		if (!s1)
			return (NULL);
		s1[0] = '\0';
	}	
	size = ft_strlen(s1) + ft_strlen(s2);
	res = (char *)malloc(sizeof(char) * (size + 1));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		res[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2[i])
	{
		res[j] = s2[i];
		i++;
		j++;
	}
	res[j] = '\0';
	free((void *)s1);
	return (res);


}
int	ft_strchr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*push_line(char *read_line)
{
	if (!read_line)
		return (NULL);
	int	i;
	char	*res;

	i = 0;
	while (read_line[i] && read_line[i] != '\n')
		i++;
	if (read_line[i] == '\n')
		i++;
	res = (char *)malloc(sizeof(char) * (i + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (read_line[i] && read_line[i] != '\n')
	{
		res[i] = read_line[i];
		i++;
	}
	if (read_line[i] == '\n')
	{
		res[i] = '\n';
		res[i + 1] = '\0';
		return (res);
	}
	res[i] = '\0';
	return (res);

}
char	*rest_read(char *read_line)
{
	int	i;
	int	j;
	char	*res;

	i = 0;
	while(read_line[i] && read_line[i] != '\n')
		i++;
	if (!read_line[i])
	{
		free(read_line);
		read_line = NULL;
		return (NULL);
	}
	res = (char *)malloc(sizeof(char) * (ft_strlen(read_line) - i + 1));
	if (!res)
		return (NULL);

	i++;
	j = 0;
	while (read_line[i])
	{
		res[j] = read_line[i];
		i++;
		j++;
	}
	res[j] = '\0';
	free(read_line);
	return (res);
}
char	*get_next_line(int fd)
{
	if (fd < 0 || read(fd, NULL, 0) < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	static char	*rest_line;
	char		buff[BUFFER_SIZE + 1];
	char		*line;
	int		read_bytes;

	buff[0] = '\0';
	read_bytes = 1;
	while((ft_strchr(buff) == 0) && read_bytes != 0)
	{
		read_bytes = read(fd, buff, BUFFER_SIZE);
		if (read_bytes < 0)
		{
			free(rest_line);
			return (NULL);
		}
		buff[read_bytes] = '\0';
		rest_line = ft_strjoin(rest_line, buff);
	}
	line = push_line(rest_line);
	rest_line = rest_read(rest_line);
	if (line[0] == '\0')
	{
		free(line);
		return (NULL);
	}
	return (line);
}

