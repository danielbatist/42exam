/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:52:18 by dbatista          #+#    #+#             */
/*   Updated: 2024/10/29 19:51:29 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	rot_13(char  *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (((str[i] + 13) > 'z') && ((str[i] + 13) > 'Z'))
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

	i = 1;
	if (argc == 1)
		write(1, "\n", 1);
	while (i < argc)
	{
		rot_13(argv[i]);
		i++;
	}
	return (0);
}
