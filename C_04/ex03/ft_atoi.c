/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbettoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 14:48:17 by cbettoni          #+#    #+#             */
/*   Updated: 2022/03/27 17:54:26 by cbettoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_atoi(char *str)
{
	int	i;
	int	nombre;
	int	signe;

	i = 0;
	nombre = 0;
	signe = 1;
	while ((str[i] >= '\t' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe = signe * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nombre = (nombre * 10) + str[i] - '0';
		i++;
	}
	return (nombre * signe);
}

int	main(void)
{
	char	string[] = " --+---+7234ab567";
	printf("%d", ft_atoi(string));
	return (0);
}
