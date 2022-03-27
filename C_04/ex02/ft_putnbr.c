/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbettoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 21:24:40 by cbettoni          #+#    #+#             */
/*   Updated: 2022/03/26 22:47:04 by cbettoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	if (nb < 0 && nb > -2147483648)
	{
		ft_putchar('-');
		ft_putnbr(nb * (-1));
	}
	if (nb >= 0 && nb < 10)
	{
		ft_putchar(nb + 48);
	}
	if (nb > 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}

/*int	main(void)
{
	ft_putnbr(2147483647);
	return (0);
}*/
