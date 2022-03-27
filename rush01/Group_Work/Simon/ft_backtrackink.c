/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtrackink.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeylot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 20:43:08 by sbeylot           #+#    #+#             */
/*   Updated: 2022/03/20 19:25:26 by sbeylot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#define N 4

int		ft_row_check_left(int array[N][N], int row, int clue);
int		ft_col_check_down(int array[N][N], int col, int clue);
int		ft_row_check_right(int array[N][N], int row, int clue);
int		ft_col_check_up(int array[N][N], int col, int clue);
int		ft_is_possible(int array[N][N], int row, int col, int clue[N][N]);
void	ft_putchar(char c);
void	ft_print_board(int board[N][N]);
void	ft_print_row(int *row);

int	ft_is_already(int board[N][N], int row, int col)
{
	int	i;
	int	j;

	i = col;
	j = row;
	while (i > 0)
	{
		i--;
		if (board[row][col] == board[row][i])
			return (0);
	}
	while (j > 0)
	{
		j--;
		if (board[row][col] == board[j][col])
			return (0);
	}
	return (1);
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
			row[i] = i++ + 1;
	}
	else
	{
		while (i < N)
			row[i++] = j--;
	}
}

int	ft_solve(int board[N][N], int col, int clue[N][N])
{
	int	i;

	i = 0;
	if (col >= N || i >= N)
		return (1);
	while (i < N)
	{
		while (col < N)
		{
			board[i][col]++;
			while (ft_is_already(board, i, col) != 1)
				board[i][col]++;
			ft_print_row(board[i]);
			if (ft_row_check_left(board, i, clue[2][col]) == 1)
			{
				if (col == N - 1 && ft_row_check_right(board, i, clue[3][col]) != 1)
				{
					board[i][col] = 0;
					if (ft_solve(board, col - 1, clue))
						return (1);
				}
				if (ft_solve(board, col + 1, clue))
					return (1);
			}
			else
			{
				board[i][col] = 0;
				if (ft_solve(board, col - 1, clue))
					return (1);
			}
			col++;
		}
	}
	return (0);
}

int main()
{
	int board[N][N] = {{1, 2, 3, 4},
					   {3, 4, 1, 2},
					   {4, 3, 2, 1},
					   {2, 1, 4, 3}};

	int board_to_solve[N][N] = {{0, 0, 0, 0},
					   			{1, 0, 0, 0},
					   			{0, 0, 0, 0},
					   			{0, 0, 0, 0}};

	int clue[N][N] = {{3, 2, 2, 1},
					  {2, 3, 1, 2},
					  {4, 2, 1, 2},
					  {1, 2, 4, 2}};

	ft_print_board(board);
	ft_putchar('\n');
	ft_print_board(clue);
	ft_putchar('\n');
	ft_print_board(board_to_solve);
	ft_solve(board_to_solve, 0, clue);
	ft_putchar('\n');
	ft_print_board(board_to_solve);

	return (0);
}
