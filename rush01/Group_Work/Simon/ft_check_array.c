/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_array.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeylot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:50:27 by sbeylot           #+#    #+#             */
/*   Updated: 2022/03/20 18:48:21 by sbeylot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#define N 4

int	ft_row_check_left(int array[N][N], int row, int clue)
{
	int	i;
	int	j;
	int	result;

	i = 0;
	j = i + 1;
	result = 0;
	while (i < N && j < N)
	{
		if (array[row][i] < array[row][j])
		{
			result++;
			i = j;
			j++;
		}
		else
			j++;
	}
	if (result < clue)
		return (1);
	return (0);
}

int	ft_col_check_down(int array[N][N], int col, int clue)
{
	int	i;
	int	j;
	int	result;

	i = 0;
	j = i + 1;
	result = 0;
	while (i < N && j < N)
	{
		if (array[i][col] < array[j][col])
		{
			result++;
			i = j;
			j++;
		}
		else
			j++;
	}
	if (result < clue)
		return (1);
	return (0);
}

int	ft_row_check_right(int array[N][N], int row, int clue)
{
	int	i;
	int	j;
	int	result;

	i = N - 1;
	j = i - 1;
	result = 0;
	while (i > 0 && j > 0)
	{
		if (array[row][i] < array[row][j])
		{
			result++;
			i = j;
			j--;
		}
		else
			j--;
	}
	if (result + 1 == clue)
		return (1);
	return (0);
}

int	ft_col_check_up(int array[N][N], int col, int clue)
{
	int	i;
	int	j;
	int	result;

	i = N - 1;
	j = i - 1;
	result = 0;
	while (i > 0 && j > 0)
	{
		if (array[i][col] < array[j][col])
		{
			result++;
			i = j;
			j--;
		}
		else
			j--;
	}
	if (result + 1 == clue)
		return (1);
	return (0);
}

int	ft_is_possible(int array[N][N], int row, int col, int clue[N][N])
{
	if (ft_col_check_down(array, col, clue[0][col])
		&& ft_col_check_up(array, col, clue[1][col])
		&& ft_row_check_left(array, row, clue[2][row])
		&& ft_row_check_right(array, row, clue[3][row]))
		return (1);
	return (0);
}
/*
int main()
{
	int board[N][N] = {{1, 2, 3, 4},
					   {3, 4, 1, 2},
					   {4, 3, 2, 1},
					   {2, 1, 4, 3}};

	int board_test[N][N] = {{1, 2, 0, 0},
					   		{0, 0, 1, 2},
					   		{0, 0, 2, 1},
					   		{0, 0, 4, 3}};

	int clue[N][N] = {{3, 2, 2, 1},
					  {2, 3, 1, 2},
					  {4, 2, 1, 2},
					  {1, 2, 4, 2}};
	printf("%d", ft_row_check_left(board, 0, 4));
	printf("%d", ft_row_check_right(board, 0, 1));
	printf("%d", ft_col_check_down(board, 0, 3));
	printf("%d", ft_col_check_up(board, 0, 2));
	printf("\n\nPossible? : %d\n", ft_is_possible(board_test, 0, 0, clue));


	return (0);
}
*/
