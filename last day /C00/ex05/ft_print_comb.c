/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fromano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 12:49:34 by fromano           #+#    #+#             */
/*   Updated: 2022/02/07 14:15:54 by fromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int x;
	int y;
	int z;

	x = 48;
	 
	while( x <= 55)
	{
		y = x + 1 ;
		while( y <= 56 ) 
		{ 
			z = y + 1;

			while( z <= 57 ) 	   
			{
				write(1, &x, 1);
				write(1, &y, 1);
				write(1, &z, 1);
				z++;
			}
		y++;
		}
	x++;
	}
}
int main(void)

{
	ft_print_comb();
	return 0;
	}
