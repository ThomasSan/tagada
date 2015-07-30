/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsanzey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/30 16:29:27 by tsanzey           #+#    #+#             */
/*   Updated: 2015/07/30 16:42:31 by tsanzey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		check_double(char c, char *str, int i)
{
	int x;

	x = 0;
	while (x < i)
	{
		if (c == str[x])
			return (0);
		x++;
	}
	return (1);
}

int		check_two(char c, char *str, char *str2, int i)
{
	int x;

	x = 0;
	while (x < i)
	{
		if (c == str2[x])
			return (0);
		x++;
	}
	while (*str)
	{
		if (c == *str)
			return (0);
		str++;
	}
	return (1);
}

int		main(int ac, char **av)
{
	int i;
	int j;

	j = 0;
	i = 0;
	if (ac == 3)
	{
		while (av[2][j])
		{
			while(av[1][i])
			{
				if (check_double(av[1][i], av[1], i))
					ft_putchar(av[1][i]);
				i++;
			}
			if (check_two(av[2][j], av[1], av[2], j))
				ft_putchar(av[2][j]);
			j++;
		}
	}
	ft_putchar('\n');
	return (0);
}
