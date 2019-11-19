/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_table.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 15:57:55 by mmateo-t          #+#    #+#             */
/*   Updated: 2019/10/22 17:06:32 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

void	read_table(char *arg)
{
	int file;
	int num;

	file = open("table.dict", O_RDWR);
	if (file == -1)
	{
		write(1, "Error al abrir el fichero",25);
		exit(1);
	}
	num = read(file, arg, 47);
	if (num == -1)
	{
		write(1, "Error al leer el fichero",24);
		exit(1);
	}
	close(file);
	write(1, "Table read succesfully\n", 24);
}
