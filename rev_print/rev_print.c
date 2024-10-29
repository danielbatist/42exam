/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:53:18 by dbatista          #+#    #+#             */
/*   Updated: 2024/10/29 09:59:04 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc == 1)
		write(1, "\n", 1);
	i = 1;
	if (argc == 2)
	{
		j = 0;
		if (!argv[i])
			write(1, "\n", 1);
		while (argv[i][j])
			j++;
		while(argv[i][j - 1]) 
		{
			write(1, &argv[i][j - 1], 1);
			j--;
		}
		write(1, "\n", 1);
	}
	return (0);
}
