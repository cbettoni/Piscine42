/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imraoui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 19:01:36 by imraoui           #+#    #+#             */
/*   Updated: 2022/03/20 19:03:34 by imraoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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
