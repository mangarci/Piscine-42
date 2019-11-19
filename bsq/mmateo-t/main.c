/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 13:26:22 by mmateo-t          #+#    #+#             */
/*   Updated: 2019/10/22 20:20:38 by mangarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	read_table(char *arg);
int		ft_strlen(char *str);
void	ft_putstr(char *str);
void	get_len(char *table);
char	*first_line_c(char *table);
int		*first_line_s(char *table);

int main()
{
	size = malloc(sizeof(int) * 2);
	characters = malloc(sizeof(char) * 3);
	char *table = malloc(sizeof(char) * 47);
	read_table(table);
	
	get_len(char *table);		
	*first_line_c(char * table);
	*first_line_s(char * table);
}
