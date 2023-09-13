/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 13:25:20 by sekmekci          #+#    #+#             */
/*   Updated: 2023/09/07 22:18:45 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	k;
	int	tmp;
	int	l;
	int	ek;

	i = 0;
	while (i < size)
	{
		k = i;
		ek = tab[i];
		while (k < size)
		{
			if (ek > tab[k] || tab[k] == tab[i])
			{
				ek = tab[k];
				l = k;
			}
			k++;
		}
		tmp = tab[i];
		tab[i] = ek;
		tab[l] = tmp;
		i++;
	}
}
int main()
{
	int i = 0;
	int a[] = {1,7,2,9,4,3};
	int size = 6;
	ft_sort_int_tab(a,size);
	while(i < size)
	{
		printf("%d",a[i]);
		i++;
	}
}