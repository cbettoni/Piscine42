/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbettoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 16:03:03 by cbettoni          #+#    #+#             */
/*   Updated: 2022/03/28 18:24:09 by cbettoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*Ex pas termine, reste le strcmp a ajouter au main ?*/
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_sort_params(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	n;

	n = argc - 1;
	while (n > argc)
	{
		ft_sort_params(argv[n]);
		write(1, "\n", 1);
		n--;
	}
	return (0);
}
