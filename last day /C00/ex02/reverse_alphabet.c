/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_alphabet.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fromano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:14:33 by fromano           #+#    #+#             */
/*   Updated: 2022/02/05 14:32:56 by fromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void alcontrario(char c)
{
	write(1, &c, 1);
}
int main()
{	
	char i;

	i = 'z';
	while (i >= 'a')
	{ 
		alcontrario(i);
		i--;
	}
}	
