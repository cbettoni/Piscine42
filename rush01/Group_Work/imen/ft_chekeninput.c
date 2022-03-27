/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chekeninput.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imraoui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 12:08:23 by imraoui           #+#    #+#             */
/*   Updated: 2022/03/20 14:19:48 by sbeylot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#define N 4

void    ft_putchar (char c )
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)

{		
		int i;

		i = 0;
        while (str[i] != '\0')
		{
            ft_putchar(str[i]);
        	i++;
		}
}

int     ft_cheken_size(char *str)
{
        int size;
        int i;

        size = 0;
        i = 0;
        while (str[i] != '\0')
        {
                if (str[i] >= '1' && str[i] <= '4')
				{
					i++;
                    size++;
				}
                else if (str[i] == ' ')
					i++;
				else
					i++;
        }
        if (size != 16) 
                return (0);
        return (1);
}
int main (int argc, char **argv )
{
/*	
	char test[] = "4 1 1 1 3 4 1 3 2 1 3 4 1 1 2 3 2";	
	if (!(ft_cheken_size(test)))
		ft_putstr("Error");
*/	
	if (argc == 2)
	{
		if (!(ft_cheken_size(argv[1])))
			ft_putstr("Error\n");
		else
			ft_putstr("Les inputs sont valides\n");
	}
	else
		ft_putstr("Error");
	return(0);
}

