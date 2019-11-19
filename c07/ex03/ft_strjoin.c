/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mangarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 19:35:00 by mangarci          #+#    #+#             */
/*   Updated: 2019/10/23 21:50:59 by mangarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
char	*ft_strjoin(int size, char **strs, char *sep)
{
	int i;
	int j;
	char *dest;
	int k;

	dest = NULL;
	k = 0;
	j = 0;
	i = 0;
	if (size > 0)
		dest = (char*)malloc(sizeof(*dest) * (size));
	else
	{
		free(dest);
		return (dest);
	}
	while (j < size)
	{
		i = 0;
		while (i < size)
		{
			dest[k] = strs[i][j];
			i++;
		}
		dest[k] = *sep;
		j++;
	}
	return (dest);
}

int main()
{
	char **str;
	int n;
	char *separador;

	separador = NULL;
	str = NULL;
	str[0][0] = 'a';
	str[0][1] = 'b';
	str[1][0] = 'a';
	str[1][1] = 'b';
	str[2][0] = 'a';
	str[2][1] = 'b';
	*separador = ',';
	n = 6;
	printf("%s", ft_strjoin(n, str, separador));
}
