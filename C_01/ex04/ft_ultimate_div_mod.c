/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbettoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 20:43:50 by cbettoni          #+#    #+#             */
/*   Updated: 2022/03/20 22:27:59 by cbettoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>
#include <unistd.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a /= *b;
	*b = c % *b;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 3;
	b = 2;
	ft_ultimate_div_mod(&a, &b);
	printf("%d\n" "%d\n", a, b);
	return (0);
}*/
