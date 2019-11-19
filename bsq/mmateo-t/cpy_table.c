/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cpy_table.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mangarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 14:04:42 by mangarci          #+#    #+#             */
/*   Updated: 2019/10/23 14:26:23 by mangarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		**char_to_int(char **table, char *characters)
{
	int i;
	int j;
	int **integer_array;

	i = i;
	j = 0;
	while (table[i][j] =! '\0')
	{
		integer_array[i][j] = table[i][j];
		j++;
		while (table[i][j] =! '\0')
		{
			integer_array[i][j] = table[i][j];
			i++;
		}
	}
	i = 1;
	j = 0;
	while (integer_array[i][j] != '\0')
	{
		while (integer_array[i][j] != '\0')
		{
			if (integer_array[i][j] == characters[1])
				integer_array[i][j] = 1;
			else if(integer_array[i][j] == characters[2])
				integer_array[i][j] = 0;
			j++;
		}
		i++;
	}
	
}
