/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeylot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 21:20:45 by sbeylot           #+#    #+#             */
/*   Updated: 2022/03/20 19:13:02 by sbeylot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define N 4

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_board(int board[N][N])
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < N)
	{
		while (j < N)
		{
			ft_putchar(board[i][j++] + '0');
			ft_putchar(' ');
		}
		i++;
		j = 0;
		ft_putchar('\n');
	}
}

void	ft_print_row(int *row)
{
	int	i;

	i = 0;
	while (i < N)
	{
		ft_putchar(row[i] + '0');
		i++;
	}
	ft_putchar('\n');
}
