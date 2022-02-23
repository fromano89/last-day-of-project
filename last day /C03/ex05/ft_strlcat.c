/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fromano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:51:52 by fromano           #+#    #+#             */
/*   Updated: 2022/02/20 16:31:24 by fromano          ###   ########.fr       */
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	destl;
	unsigned int	srcl;

	i = 0;
	destl = ft_lengh(dest);
	srcl = ft_lengh(src);
	if (destl > size)
		return (srcl + size);
	if (size == 0)
		return (srcl);
	while (src[i] != '\0' && (destl + i) < size)
	{
		dest[destl + i] = src[i];
		i++;
	}	
	dest[destl + i] = '\0';
	return (destl + i);
}
