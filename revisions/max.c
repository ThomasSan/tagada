/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsanzey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/30 11:55:01 by tsanzey           #+#    #+#             */
/*   Updated: 2015/07/30 12:55:20 by tsanzey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

int		max(int *tab, unsigned int len)
{
	int	max;
	unsigned int i;

	i = 0;
	max = -2147483647;
	if(*tab)
	{
		while (i < len)
		{
			if (tab[i] > max)
				max = tab[i];
			i++;
		}
	return (max);
	}
	else
		return (0);
}
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if(nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if(nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}

int		main(void)
{
	int	tab[10];

	ft_putnbr(max(tab, 10));
	return (0);
}
