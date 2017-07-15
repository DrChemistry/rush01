/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-rosa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 10:13:18 by adi-rosa          #+#    #+#             */
/*   Updated: 2017/07/15 12:53:08 by adi-rosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "sudo.h"

int		check_char(char *str)
{
	int x;

	x = 0;
	if (ft_strlen(str) != 9)
		return (ERROR);
	while (str[x])
	{
		if (str[x] != '.' && (str[x] < '0' || str[x] > '9'))
			return (ERROR);
		++x;
	}
	return (SUCCESS);
}

char	**error(int size, char **tab)
{
	char	**res;
	int		x;

	x = 1;
	while (tab[x])
	{
		if (check_char(tab[x]) == ERROR)
			return (NULL);
		++x;
	}
	if ((res = malloc(sizeof(char *) * size)) == NULL)
		return (NULL);
	x = 1;
	while (tab[x])
	{
		res[x - 1] = tab[x];
		++x;
	}
	res[x - 1] = NULL;
	return (res);
}

int		sudoku(int size, char **tab)
{
	int x;

	if ((tab = error(size, tab)) == NULL)
		return (ERROR);
	x = 0;
	while (tab[x])
	{
		ft_putstr(tab[x++]);
		ft_putchar('\n');
	}
	ft_putchar('\n');
	algo(tab);
	return (0);
}
