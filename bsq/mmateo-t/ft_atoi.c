/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mangarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 10:03:27 by mangarci          #+#    #+#             */
/*   Updated: 2019/10/23 18:49:20 by mangarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str)
{
	int i;
	int sym;
	int res;

	i = 0;
	res = 0;
	while (str[i] >= '0' && str[i] <= '9' && ft_strlen(str) - 3)
	{
		res = res * 10;
		res = res + (str[i] - '0');
		i++;
	}
	return (res * sym);
}
