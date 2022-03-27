/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbettoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 17:14:46 by cbettoni          #+#    #+#             */
/*   Updated: 2022/03/17 17:54:28 by cbettoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_putchar (a + 48);
				ft_putchar (b + 48);
				ft_putchar (c + 48);
				++c;
				if (!(a == 7))
					write(1, ", ", 2);
			}
			++b;
		}
		++a;
	}
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
