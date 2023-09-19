/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: siclek <siclek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 12:58:54 by siclek            #+#    #+#             */
/*   Updated: 2023/09/18 22:11:26 by siclek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	c;
	int	k;

	k = -1;
	while (str[++k] != '\0')
	{
		c = str[k];
		if ((48 > c) || (c > 57))
			return (0);
	}
	return (1);
}
