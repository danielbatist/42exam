/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbatista <dbatista@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:36:49 by dbatista          #+#    #+#             */
/*   Updated: 2024/10/28 17:50:23 by dbatista         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

#include <stdio.h>

int	main(void)
{
	int	num1 = 4;
	int	num2 = 5;
	printf("num1: %i\n", num1);
	printf("num2: %i\n", num2);
	ft_swap(&num1, &num2);
	printf("num1: %i\n", num1);
	printf("num1: %i\n", num2);
	return (0);
}
