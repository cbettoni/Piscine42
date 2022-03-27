/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeylot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 16:08:35 by sbeylot           #+#    #+#             */
/*   Updated: 2022/03/20 18:24:50 by imraoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#define N 4

// A MODIFIER POUR PUTCHAR UN INT //
void    ft_putchar (char c )
{
    write(1, &c, 1);
}

void	ft_print_matrice(int **matrice)
{       
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < N)
	{
		while (j < N)
		{
	    		ft_putchar(matrice[i][j] + '0');
	    		j++;
		}
	   	ft_putchar('\n');
	    	i++ ;
	    	j = 0;
	}
}
*/
// FONCTION POUR PASSER LES ELEMENTS DE LA CHAINE DE CARATERE AU TABLEAU DE INT //
void	ft_init_with_char(char *str, int *array)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{  
		if (str[i] >= '1' && str[i] <= '4')
		{
			array[j] = str[i] - '0';
			j++;
			i++;
		}
		i++;
	}
}
void	init_matrice (int **matrix)
{
	int i;

	i = 0; 
	matrix = (int**)malloc(sizeof(int*) * N);
        while (i < N)
        {
                matrix[i] = (int*)malloc(sizeof(int) * N);
                i++;
        }
}

int main(int argc, char **argv)
{
	int **matrice;
	int i;

	i = 0; 
	matrice = (int**)malloc(sizeof(int*) * N);
        while (i < N)
        {
                matrice[i] = (int*)malloc(sizeof(int) * N);
                i++;
        }
	ft_print_matrice(matrice);

	return (0);

}
