/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mangarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 10:47:07 by mangarci          #+#    #+#             */
/*   Updated: 2019/10/17 13:44:39 by mangarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void cond(char a[]);

void	ft_print_comb(void)
{
	char a[3];

	a[0] = '0';
	a[1] = '1';
	a[2] = '2';
	loop(a);
}

void	cond(char a[])
{
	while (a[0] <= '7')
	{
		if ((a[0] < a[1]) && (a[1] < a[2]))
		{
			ft_putchar(a[0]);
			ft_putchar(a[1]);
			ft_putchar(a[2]);
			if (a[0] < '7')
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
		if (a[2]++ >= '9')
		{
			a[2] = a[1] + 1;
			a[1]++;
		}
		if (a[1] == '9')
		{
			a[1] = a[0] + 1;
			a[0]++;
		}
	}
}
