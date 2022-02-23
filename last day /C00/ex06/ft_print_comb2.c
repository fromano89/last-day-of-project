/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fromano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:58:28 by fromano           #+#    #+#             */
/*   Updated: 2022/02/07 16:33:39 by fromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}
void ft_print_comb2(void)
{
	char	a;
	char	b;
	
	a = -1;

	while (a++ < 99)
	{
		b = a;
		while (b++ < 99)
		{
			ft_putchar( '0' + ( a / 10 ));
			ft_putchar( '0' + ( a % 10 ));
			ft_putchar( ' ' ); 
			ft_putchar( '0' + ( b / 10 ));
			ft_putchar( '0' + ( b % 10 ));
			if (a != 98)
			{	
				ft_putchar( ',' );
				ft_putchar( ' ' );
			}
		}	
	}
}
int main(void) 
{
	ft_print_comb2();
	return 0;
}
