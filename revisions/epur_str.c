/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsanzey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/30 18:13:01 by tsanzey           #+#    #+#             */
/*   Updated: 2015/07/30 18:39:38 by tsanzey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int ac, char **av)
{
	int	i;

	i = 0;
	if (ac == 2)
	{
		while (av[1][i])
		{
			if (av[1][i] == ' ' || av[1][i] == '\t' || av[1][i] == '\n' || 
					av[1][i] == '\r' || av[1][i] == '\f' || av[1][i] == '\v')
				i++;
			if(av[1][i] >= 33 && av[1][i] <= 126)
			{
				while (av[1][i] >= 33 && av[1][i] <= 126)
				{
					ft_putchar(av[1][i]);
					i++;
				}
				if (av[1][i] != '\0' && av[1][i + 1] != '\0')
					ft_putchar(' ');
			}
		}
	}
	ft_putchar ('\n');
	return (0);
}