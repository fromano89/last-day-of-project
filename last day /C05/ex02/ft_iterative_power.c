/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fromano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 12:25:52 by fromano           #+#    #+#             */
/*   Updated: 2022/02/23 12:47:19 by fromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int result;
	
	result = 1;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	else 
		while (power != 0)
		{
			result = (result * nb);
			power--;
		}
	return (result);
}
int main(void)
{
	int	i;
	
	i = ft_iterative_power(3, 3);
	printf("%d", i);
}
