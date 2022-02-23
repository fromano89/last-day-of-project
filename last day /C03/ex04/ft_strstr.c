/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fromano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:43:11 by fromano           #+#    #+#             */
/*   Updated: 2022/02/17 19:51:15 by fromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_lengh(char *s1)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	n;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	if (ft_lengh(to_find) > ft_lengh(str))
		return (0);
	while (str[i] != '\0')
	{
		n = 0;
		while (str[i + n] == to_find[n] && str[i + n] != '\0')
		{
			if (to_find[n + 1] == '\0')
				return (&str[i]);
			n++;
		}
		i++;
	}
	return (0);
}
