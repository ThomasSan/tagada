/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsanzey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/29 11:05:01 by tsanzey           #+#    #+#             */
/*   Updated: 2015/07/29 12:20:57 by tsanzey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}
int		main(int ac, char **av)
{
	if (ac == 2)
	{
		while (*av[1] == ' ' || *av[1] == '\v' || *av[1] == '\t' || *av[1] == '\n'
				|| *av[1] == '\r' || *av[1] == '\f')
			av[1]++;
		while(*av[1] >= 33 && *av[1] <= 126)
		{
			ft_putchar(*av[1]);		
			av[1]++;
		}
	}
	ft_putchar('\n');
	return (0);
}
