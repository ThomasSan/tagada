/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsanzey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/29 20:43:09 by tsanzey           #+#    #+#             */
/*   Updated: 2015/07/29 20:59:30 by tsanzey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_check_double(char c, char *str, int k)
{
	int i;

	i = 0;
	while (i < k)
	{
		if (c == str[i])
			return (0);
		i++;
	}
	return (1);
}
int		main(int ac, char **av)
{
	int i;
	int	j;

	i = 0;
	(void)ac;
	while (av[1][i])
	{
		j = 0;
		while (av[2][j])
		{
			if (av[2][j] == av[1][i])
			{
				if (ft_check_double(av[2][j], av[1], i))
				{
					ft_putchar(av[1][i]);
					i++;
				}
			}
			j++;
		}
		i++;
	}
	return (0);
}
