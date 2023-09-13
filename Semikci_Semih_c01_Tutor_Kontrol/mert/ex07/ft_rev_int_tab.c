/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:12:41 by sekmekci          #+#    #+#             */
/*   Updated: 2023/09/06 14:55:03 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	a;
	int	c;

	i = 0;
	c = size - 1;
	while (i < (size / 2))
	{
		a = tab[i];
		tab[i] = tab[c];
		tab[c] = a;
		c--;
		i++;
	}
}
