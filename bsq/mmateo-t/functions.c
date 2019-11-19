/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mangarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 19:55:21 by mangarci          #+#    #+#             */
/*   Updated: 2019/10/22 20:17:24 by mangarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		get_len(char *table)
{
	int i;

	i = ft_strlen(table);
	printf("%i\n", i);
	ft_putstr(table);
}

char		*first_line_c(char *table)
{
	char *characters;
	int j;

	j = 0;
	size[0] = table[0];
	while (table[j] != '\n')
	{
		characters[j] = table[ + 1];
		j++;
	}
	j++;
	printf("%s\n", characters);
	return (characters);
}

int		*first_line_s(*table)
{
	int *size;
	int row;
	int j;

	j = 0;
	row = 0;
	while (table[j] != '\0')
	{
		row++;
		j++;
	}
	size[1] = row;
	printf("%c\n", size[0]);
	printf("%i\n", size[1]);
	return (size[1]);
}
