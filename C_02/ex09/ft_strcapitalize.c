/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbettoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:34:32 by cbettoni          #+#    #+#             */
/*   Updated: 2022/03/23 23:49:21 by cbettoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] >= 97 && str[0] <= 122)
			str[0] = str[0] - 32;
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		while ((str[i] >= 32 && str[i] <= 47)
			|| (str[i] >= 58 && str[i] <= 64)
			|| (str[i] >= 91 && str[i] <= 96)
			|| (str[i] >= 123 && str[i] <= 126))
		{
			i++;
			if (str[i] >= 97 && str[i] <= 122)
			{
				str[i] = str[i] - 32;
				i--;
			}
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	string[] = "^salut,~commEnt tu vas";

	printf("%s", ft_strcapitalize(string));
	return (0);
}*/
