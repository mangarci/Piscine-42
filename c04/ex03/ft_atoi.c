/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mangarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/18 10:03:27 by mangarci          #+#    #+#             */
/*   Updated: 2019/10/18 13:53:49 by mangarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_space(char c)
{
	if ((c == ' ') || (c == '\f') || (c == '\r') || (c == '\v') ||
		(c == '\t') || (c == '\n'))
		return (1);
	else
		return (0);
}

int		ft_atoi(char *str)
{
	int i;
	int sym;
	int res;

	i = 0;
	res = 0;
	sym = 1;
	while (ft_space(str[i]))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sym *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10;
		res = res + (str[i] - '0');
		i++;
	}
	return (res * sym);
}
