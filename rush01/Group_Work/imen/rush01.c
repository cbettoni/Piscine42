/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imraoui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 12:02:44 by imraoui           #+#    #+#             */
/*   Updated: 2022/03/20 12:03:00 by imraoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//fonction ft-putchar
void    ft_putchar (char c )
{
    write(1, &c, 1) ;
}
//afficher une  chaine de caractere 
void	ft_putstr(char *str)
{ int i;
	while (str[i] ='/0')
		ft_putchar(str[i]);
        i++
}

//print tqb
void	ft_print_tab(char **tab, int size)
{
	int a;
	int b;

	b = 0;
	while (b < size)
	{
		a = 0;
		while (a < size)
		{
			ft_putchar(tab[a][b] + 48);
			if (++a < size)
				ft_putchar(' ');
		}
		ft_putchar('\n');
		b++;
	}
}
//initialiser tableau avec une allocation de memoire
char	**ft_init(char *str, int size)
{
	char	**tab;
	int		a;
	int		b;

	if (!(tab = malloc(size * sizeof(char*))))
		return (NULL);
	b = -1;
	while (++b < size)
	{
		if (!(tab[b] = malloc((size + 4) * sizeof(char))))
			return (NULL);
		a = -1;
		while (+a < size)
			tab[a][b] = 0;
		a = -1;
		while (++a < 4)
			tab[y][size + a] = str[2 * (a + b * size)] - 48;
	}
	return (tab);
    // verificher si c valide
    int		ft_valid(char *str, int size)
{
	int i;
	int j;

	i = -1;
	j = size / 4;
	while (++i < size)
	{
		if (*str < 49 || *str > j + 48)
			return (0);
		*str = 2;
	}
	return (j);
}
//obtenir taille 
int		ft_get_size(char *str)
{
	int size;
	int i;

	size = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] >= '1' && str[i] <= '9')
			size++;
		else
			return (0);
		if (str[++i] == ' ' && !str[++i])
			return (0);
	}
	if (size != 16) //4*4
		return (0);
	return (ft_valid(str, size));
}

int		main(int argc, char **argv)
{
	char	**tab;
	int		size;

	if (argc == 2 || !(size = ft_get_size(argv[1])))
		ft_putstr("Error\n");
	else if ((tab = ft_init(argv[1], size)))
	{
		// on appel notre foction 
	}
	else
		ft_putstr("Error\n");
	return (0);
}
//fonction une chaine de caractere en entier
int	ft_atoi(char *str)
{
	int	i;
	int	j;
	int	signe;
	int	resultat;

	i = 0;
    j = 0;
	signe = 1;
	resultat = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			j++;
		i++;
	}
	if (i % 2 == 1)
		signe = signe * -1;
	while (str[i] >= 48 && str[i] <= 57)
	{
		resultat = (str[i] - 48) + (resultat * 10);
		i++;
	}
	return (resultat * signe);
