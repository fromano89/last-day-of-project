/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ciao.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fromano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 12:58:28 by fromano           #+#    #+#             */
/*   Updated: 2022/02/05 13:10:00 by fromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main()
{
	char	c[12]="ciao a tutti";
	write(1, &c, 12);
	return 0;
}
