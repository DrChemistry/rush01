/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-rosa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 09:52:50 by adi-rosa          #+#    #+#             */
/*   Updated: 2017/07/15 11:02:19 by adi-rosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudo.h"

int		main(int ac, char **av)
{
	if (ac != 10)
		ft_putstr("Error\n");
	else
		sudoku(ac, av);
	return (0);
}
