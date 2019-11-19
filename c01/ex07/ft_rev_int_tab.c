/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mangarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 17:40:26 by mangarci          #+#    #+#             */
/*   Updated: 2019/10/18 09:31:58 by mangarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int i;

	i = 0;
	while (i < size)
	{
		tab[i] = tab[size - 1 - i];
		printf("%d", tab[i]);
		i++;
	}
}
int main()
{
	int n;
	int src[4];

	n = 4;
	src[0] = 1;
	src[1] = 2;
	src[2] = 3;
	src[3] = 4;
	ft_rev_int_tab(src, n);
}
