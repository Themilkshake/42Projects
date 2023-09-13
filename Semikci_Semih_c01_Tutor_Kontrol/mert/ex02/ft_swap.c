/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 14:42:43 by sekmekci          #+#    #+#             */
/*   Updated: 2023/09/07 21:49:50 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int	*tmp;
	int k;
	tmp = &k;

	*tmp = *a;
	*a = *b;
	*b = *tmp;
}

int main()
{
	int a = 15;
	int b= 3;
	ft_swap(&a, &b);
	printf("%d,%d",a,b);
}