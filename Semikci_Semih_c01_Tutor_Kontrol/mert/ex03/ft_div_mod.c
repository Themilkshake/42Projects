/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 15:30:33 by sekmekci          #+#    #+#             */
/*   Updated: 2023/09/07 21:55:25 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
	printf("%d div \n ",*div);
	printf("%d mod \n",*mod);
}


int main()
{
	int a =15;
	int b = 17;

	ft_div_mod(a,b,&a,&b);
	printf("%d,%d",a,b);
	
}

