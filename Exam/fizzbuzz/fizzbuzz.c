/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbettoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:59:08 by cbettoni          #+#    #+#             */
/*   Updated: 2022/03/29 14:59:29 by cbettoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_nbr(int nbr)
{
	if (nbr > 9)
		ft_write_nbr(nbr / 10);
	write(1, &"0123456789"[nbr % 10], 1);
}

int	main(void)
{
	int nbr;

	nbr = 1;
	while (nbr <= 100)
	{
		if (nbr % 3 == 0)
			write(1, "fizz", 4);
		else if (nbr % 5 == 0)
			write(1, "buzz", 4);
		else if (nbr % 3 == 0 && nbr % 5 == 0)
			write(1, "fizzbuzz", 8);
		else
			ft_write_nbr(nbr);
		write(1, "\n", 1);
		nbr++;
	}
}
