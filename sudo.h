/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudo.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adi-rosa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/15 10:02:14 by adi-rosa          #+#    #+#             */
/*   Updated: 2017/07/15 16:58:07 by adi-rosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDO_H
# define SUDO_H

# define ERROR -1
# define SUCCESS 0

void	ft_putstr(char *str);
int		ft_strlen(char *str);
void	ft_putchar(char c);
int		sudoku(int size, char **tab);
void	algo(char **tab);

#endif
