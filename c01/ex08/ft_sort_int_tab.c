/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mangarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/14 13:01:12 by mangarci          #+#    #+#             */
/*   Updated: 2019/10/14 17:25:29 by mangarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (tab[i] < size)
	{
		j = 0;
		while (tab[j] < size)
		{
			if (tab[j] > tab[j + 1])
			{
				ft_swap(tab[j], tab[j + 1]);
			}
			j++;
		}
		i++;
	}
}
