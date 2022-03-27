/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbettoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 19:46:39 by cbettoni          #+#    #+#             */
/*   Updated: 2022/03/20 19:52:12 by cbettoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#define N 4

void	ft_putchar(char c )
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putmatrice(int **matrice)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < N)
	{
		while (j < N)
		{
			ft_putchar(matrice[i][j] + '0');
			j++;
		}
		ft_putchar('\n');
		i++ ;
		j = 0;
	}
}
