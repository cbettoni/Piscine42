/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbettoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:56:50 by cbettoni          #+#    #+#             */
/*   Updated: 2022/03/30 17:16:26 by cbettoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	n = 0;
	if (n > 0)
		ft_putchar('P');
	else if (n <= 0)
		ft_putchar('N');
}

int	main(void)
{
	ft_is_negative(-14);
	return (0);
}
