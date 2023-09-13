/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sekmekci <sekmekci@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:10:59 by sekmekci          #+#    #+#             */
/*   Updated: 2023/09/07 22:06:19 by sekmekci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int	ft_strlen(char *str)
{
	int	boyut;

	boyut = 0;
	while (str[boyut] != NULL)
	{
		boyut++;
	}
	return (boyut);
}

int main()
{
	int a;
	 char b[10] = "mert";

	 a = ft_strlen(b);

	 printf("%d",a);
}
