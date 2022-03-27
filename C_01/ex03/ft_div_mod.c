/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbettoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 21:15:44 by cbettoni          #+#    #+#             */
/*   Updated: 2022/03/20 22:27:15 by cbettoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void)
{
	int	a;
	int	b;
	int	*div;
	int	*mod;

	a = 3;
	b = 2;
	div = &a;
	mod = &b;
	printf("%d\n" "%d\n", a, b);
	ft_div_mod(a, b, div, mod);
	printf("%d\n" "%d\n", a, b);
	return (0);
}*/
