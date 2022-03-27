/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtrackink_row.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeylot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 20:43:08 by sbeylot           #+#    #+#             */
/*   Updated: 2022/03/20 19:21:13 by sbeylot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define N 4

int		ft_row_check_left(int *row, int clue);
int		ft_row_check_right(int *row, int clue);
void	ft_putchar(char c);
void	ft_print_board(int board[N][N]);

int	ft_is_already(int row[N], int col)
{
	int	i;

	i = col;
	while (i > 0)
	{
		i--;
		if (row[col] == row[i])
			return (0);
	}
	return (1);
}

void	print_row(int *row)
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

int	ft_fill_row(int row[N], int clue)
{
	int	i;
	int	j;

	i = 0;
	j = 4;
	if (clue == 4)
	{
		while (i < N)
		{
			row[i] = i + 1;
			i++;
		}
	}
	else
	{
		while (i < N)
			row[i++] = j--;
	}
	return (1);
}

int	ft_solve(int row[N], int col, int clue[2])
{
	if (col >= N)
		return (1);
	if (clue[0] == 4 || clue[0] == 1)
	{
		ft_fill_row(row, clue[0]);
		return (0);
	}
	while (col < N)
	{
		row[col]++;
		while (ft_is_already(row, col) != 1)
			row[col]++;
		print_row(row);
		if (ft_row_check_left(row, clue[0]) == 1)
		{
			if (col == N - 1 && ft_row_check_right(row, clue[1]) != 1)
			{
				row[col] = 0;
				if (ft_solve(row, col - 1, clue))
					return (1);
			}
			if (ft_solve(row, col + 1, clue))
				return (1);
		}
		else
		{
			row[col] = 0;
			if (ft_solve(row, col - 1, clue))
				return (1);
		}
		col++;
	}
	return (0);
}
int	main()
{

	int	row2[N] = {0, 0, 0, 0};
	int	clue1[2] = {2, 3};
	print_row(row2);
	ft_solve(row2, 0, clue1);
	print_row(row2);

	return (0);
}
