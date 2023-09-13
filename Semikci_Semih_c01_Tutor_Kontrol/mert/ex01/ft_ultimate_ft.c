/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 03:07:47 by sekmekci          #+#    #+#             */
/*   Updated: 2023/09/08 00:34:02 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


void	ft_ultimate_ft(int **nbr)
{
	**nbr = 42;
	printf("%p----",&nbr);
	printf("%p 1\n",nbr);
	printf("%p 1\n",*nbr);
	printf("%d 2\n",**nbr);
}

int main()
{
	int *a;
	int b;
	printf("%p 3\n",a);
	a = &b;
	printf("%p 4\n",a);
	ft_ultimate_ft(&a);

}
