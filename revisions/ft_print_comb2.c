/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsanzey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/28 20:04:36 by tsanzey           #+#    #+#             */
/*   Updated: 2015/07/29 11:48:30 by tsanzey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2()
{
	int i;
	int j;
	int x;
	int y;

	y = 0;
	x = 0;
	i = 0;
	j = 1;
	while (x <= 9)
	{
		while (y < 9)
		{	
			while (i <= 9)
			{
				while (j <= 9)
				{
					ft_putchar(x + '0');
					ft_putchar(y + '0');
					ft_putchar(' ');
					ft_putchar(i + '0');
					ft_putchar(j + '0');
					ft_putchar('\n');
					j++;
				}
				i++;
				j = i;
			}
			y++;
			i = y - 1;
			j = y + 1;
		}
		x++;
	}
}

int		main(void)
{
	ft_print_comb2();
	return(0);
}
