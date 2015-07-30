/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsanzey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/30 12:57:21 by tsanzey           #+#    #+#             */
/*   Updated: 2015/07/30 16:14:51 by tsanzey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_bits(unsigned char octet)
{
	int		i;
	unsigned char	c;
	
	i = 3;
	while(i >= 0)
	{
		c = (octet >> i) &1;
		if (c == 1)
			ft_putchar('1');
		else
			ft_putchar('0');
		i--;
	}
	ft_putchar(' ');
	i = 7;
	while (i >= 4)
	{
		c = (octet >> i) &1;
//		if (c == 1)
//			ft_putchar('1');
//		else
//			ft_putchar('0');
//		i--;
//	}
}

int		main(void)
{
	print_bits(13);
	return (0);
}

unsigned char		swap_bit(unsigned char octet)
{
	return (octet >> 4) | (octet << 4);
}
