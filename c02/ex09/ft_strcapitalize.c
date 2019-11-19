/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mangarci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 22:24:13 by mangarci          #+#    #+#             */
/*   Updated: 2019/10/15 20:34:43 by mangarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	ft_strlowcase(str);
	i = 0;
	if ((str[0] >= 'a') && (str[0] <= 'z'))
	{
		str[0] = str[0] - 32;
	}
	while (str[i] != '\0')
	{
		if (!((str[i] > 47 && str[i] < 58) || (str[i] > 64 && str[i] < 91) ||
		(str[i] > 96 && str[i] < 123)) || str[i] == ' ')
		{
			if ((str[i + 1] >= 'a') && (str[i + 1] <= 'z'))
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
		i++;
	}
	return (str);
}
