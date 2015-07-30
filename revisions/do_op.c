/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsanzey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/29 17:51:42 by tsanzey           #+#    #+#             */
/*   Updated: 2015/07/29 19:27:45 by tsanzey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_atoi(char *str)
{
	int	val;
	int nb;
	int sign;

	val = 0;
	nb = 0;
	sign = 1;
	while (*str == ' ' || *str == '\v' || *str == '\t' || *str =='\n' || *str == '\r' || *str == '\f')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <='9')
	{
		nb =(int) (*str - '0');
		val = (val * 10) + nb;
		str++;
	}
	return (val * sign);
}

int		ft_do_op(int a, int b, char oper)
{
	if (oper == '+')
		return (a + b);
	else if (oper == '-')
		return (a - b);
	else if (oper == '/')
		return (a / b);
	else if (oper == '*')
		return (a * b);
	else
		return (0);
}

int		main(int ac, char **av)
{
	int	result;
	int		a;
	int		b;
	char	oper;

	if (ac == 4)
	{
		a = ft_atoi(av[1]);
		oper = *av[2];
		b = ft_atoi(av[3]);
		result = ft_do_op(a, b, oper);
		printf("a = %d, b = %d\n", a, b);
		printf("%d", result);
	}
	printf("\n");
	return (0);
}
