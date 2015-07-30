/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsanzey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/29 11:38:37 by tsanzey           #+#    #+#             */
/*   Updated: 2015/07/30 20:22:48 by tsanzey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{	
	write(1, &c, 1);
}

int		main(int ac, char **av)
{
	int i;
	int j;

	i = 0;
	if (ac == 2)
	{
		while (*av[1])
		{
			j = 0;
			if (*av[1] >= 'a' && *av[1] <= 'z')
				i = (int) (*av[1] - 96);
			else if (*av[1] >= 'A' && *av[1] <= 'Z')
				i = (int) (*av[1] - 64);
			while (j < i)
			{
				ft_putchar(*av[1]);
				j++;
			}
			av[1]++;
		}
	}
	ft_putchar('\n');
	return (0);
}
