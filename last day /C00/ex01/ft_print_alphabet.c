/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fromano <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 12:21:55 by fromano           #+#    #+#             */
/*   Updated: 2022/02/05 13:17:38 by fromano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/* librerie: unistd.h , stdio.h */

/*D = dichiarazione
 *A = assegnazione*/

#include <unistd.h>
/* D - non necessaria  risposta 'Void' delle f(x)(CHARCTER C)*/
void ft_print_alphabet(char c)
/*SCRIVI COMANDO (input, &(indirizzo di CHARACTER)output, byte sing richiesta);*/ 
	{	
	write(1, &c, 1);
	}
/*D variabile - A f(x)*/
int main()
	{int	i;/* dichiaro i(var) - spazio memoria dedicato*/
	i = 'a';  /* assegno valore a - (var) spazio di memoria riempito */
	while (i <= 122)/* condizione/mentre (se e'vero)*/ 
	{ft_print_alphabet(i); /*assegno (var) a f(x)*/
	i++;}/*incremento*/
	}
