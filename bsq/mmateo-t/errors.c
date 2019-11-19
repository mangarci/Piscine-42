/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mangarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 16:27:00 by mangarci          #+#    #+#             */
/*   Updated: 2019/10/22 18:22:22 by mangarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int		it_is_printable(char *c)
{
	if (c >= 33 && c <= 126)
		return (1)
	else
		return (0);
}


void	map_err(char *str[])
{
	int i;
	int aux;
	int j;

	i = 0;
	j = 0;
	aux = 0;
	if (str[i][j] == '\0')
		aux = 1;
	else if (ft_strlen(str[0][j]) != ft_strlen(str[i][j]))
		aux = 1;
	else if (str[ft_strlen[i]] != '\n')
		aux = 1;
	else if (!it_is_printable(str[0][0]) && !it_is_printable(str[0][1]) && !it_is_printable(str[0][2]) && !it_is_printable([0][3]))
		aux = 1;
	else if (str[0][0] != str[0][1] != str[0][2] != str[0][3])
		aux = 0;
	while (str[i][j] != '\0')
	{
		while (str[i][j] != '\0')
		{
			if (str[i][j] != (str[0][0] || str[0][1] || str[0][2] || str[0][3]))
				aux = 1;
			i++;
		}
		j++;
	}
	if (aux = 1)
		ft_putchar("map error\n");
}
