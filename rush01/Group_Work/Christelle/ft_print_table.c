/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_table.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbettoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 18:00:59 by cbettoni          #+#    #+#             */
/*   Updated: 2022/03/19 20:00:43 by cbettoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
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

void	ft_printstr(char *str, int size)
{
	int j;
	j = 0;
	while (j < size )
	{
		ft_putstr(str);
		ft_putchar('\n');
		j++;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 2)
	{
		ft_putstr("Error");
	}
	if (argc == 2) 
	{
		char	str[] = "test";
		ft_putstr(argv[1]);
	}
	if (argc < 2)
		ft_putstr("Error");
	
	return (0);
}
