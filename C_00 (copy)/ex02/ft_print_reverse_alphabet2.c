/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet2.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbettoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 14:51:03 by cbettoni          #+#    #+#             */
/*   Updated: 2022/03/30 15:34:18 by cbettoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet2(void)
{
	char	lettre;

	lettre = 'z';
	while (lettre >= 'a')
	{
		ft_putchar(lettre);
		lettre--;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet2();
	return(0);
}
