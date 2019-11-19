/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mangarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 19:19:36 by mangarci          #+#    #+#             */
/*   Updated: 2019/10/23 19:24:07 by mangarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *new;

	i = 0;
	if (min > max)
		return (0);
	new = (int*)malloc(sizeof(*new) * (max - min));
	while (min < max)
	{
		new[i] = min;
		i++;
		min++;
	}
	return (new);
}
