/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-rosa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 12:53:15 by adi-rosa          #+#    #+#             */
/*   Updated: 2017/07/15 18:50:39 by adi-rosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "sudo.h"

void	block_possibility(int *count, char **tab, int x, int y)
{

}

int		get_possibility(char **tab, int y, int x)
{
	int b;
	int poss;
	int count[10];

	b = -1;
	while (++b < 9)
		count[b] = b + 1;
	b = -1;
	while (tab[y][++b])
		if (tab[y][b] > '0' && tab[y][b] <= '9')
			count[tab[y][b] - '0' - 1] = 0;
	b = -1;
	while (tab[++b])
		if (tab[b][x] > '0' && tab[b][x] <= '9')
			count[tab[b][x] - '0' - 1] = 0;
	block_possibility(count, tab, x, y);
	count[9] = -1;
	b = -1;
	while (count[++b] != -1)
		printf("%d", count[b]);
	printf(" | ");
	return (0);
}

void	algo(char **tab)
{
	int y;
	int x;

	y = 0;
	while (tab[y])
	{
		x = 0;
		while (tab[y][x])
		{
			if (tab[y][x] == '.')
				tab[y][x] = get_possibility(tab, y, x);
			++x;
		}
		++y;
	}
}
