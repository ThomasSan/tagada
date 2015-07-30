/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsanzey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/30 16:43:31 by tsanzey           #+#    #+#             */
/*   Updated: 2015/07/30 18:43:49 by tsanzey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int		nb;
	int		val;
	int		sign;

	nb = 0;
	val = 0;
	sign = 1;
	while (*str == ' ' || *str == '\v' || *str == '\t' || *str == '\n' ||*str == '\r' ||*str == '\f')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = - 1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nb = (int) (*str - '0');
		val = (val * 10) + nb;
		str++;
	}
	return (val * sign);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	else if (nb > 9)
		ft_putnbr(nb / 10);
	ft_putchar(nb % 10 + '0');
}

int		is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		add_prime_sum(int nb)
{
	int		total;
	int		i;

	i = 0;
	total = 0;
	while (i <= nb)
	{
		if (is_prime(i))
			total = total + i;
		i++;
	}
	return (total);
}

int		main(int ac, char **av)
{
	int	i;
	int j;

	if(ac == 2)
	{
		i = ft_atoi(av[1]);
		j = add_prime_sum(i);
		ft_putnbr(j);
	}
	else
		ft_putchar('0');
	ft_putchar('\n');
	return (0);
}
