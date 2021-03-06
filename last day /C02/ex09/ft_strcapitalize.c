/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fromano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 19:21:43 by fromano           #+#    #+#             */
/*   Updated: 2022/02/16 13:36:07 by fromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
				str[i] = str[i] + 32;
		if (str[0] >= 97 && str[0] <= 122)
				str[0] = str[0] - 32;
		if ((str[i - 1] < 48) || (str[i - 1] >= 58 && str[i - 1] <= 64)
			|| (str[i -1] >= 91 && str[i -1] <= 96) || str[i -1] >= 123)
			if (str[i] > 96 && str[i] < 123)
				str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
