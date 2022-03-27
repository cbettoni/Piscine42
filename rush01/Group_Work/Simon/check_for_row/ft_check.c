/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeylot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:50:27 by sbeylot           #+#    #+#             */
/*   Updated: 2022/03/20 18:44:44 by sbeylot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define N 4

int	ft_row_check_left(int *row, int clue)
{
	int	i;
	int	j;
	int	result;

	i = 0;
	j = i + 1;
	result = 0;
	while (i < N && j < N)
	{
		if (row[i] < row[j])
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

int	ft_row_check_right(int *row, int clue)
{
	int	i;
	int	j;
	int	result;

	i = N - 1;
	j = i - 1;
	result = 0;
	while (i > 0 && j > 0)
	{
		if (row[i] < row[j])
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
/*
int main()
{
	int row[4] = {2, 3, 4, 1};

	printf("%d", ft_check_left(row, 3));
	printf("%d", ft_check_right(row, 3));

	return (0);
}
*/
