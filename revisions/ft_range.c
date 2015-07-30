/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsanzey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/30 19:34:00 by tsanzey           #+#    #+#             */
/*   Updated: 2015/07/30 20:18:04 by tsanzey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		*ft_range(int start, int end)
{
	int	*tab;
	int	i;
	int	range;

	i = 0;
	tab = NULL;
	if(start > end)
		range = start - end + 1;
	else if(start < end)
		range = end - start + 1;
	else
		range = 1;
	tab = (int *)malloc(sizeof(int) * (range));
	if (tab == NULL)
		return (0);
	if(start > end)
	{
		while (i < range)
		{
			tab[i] = start - i;
			printf("%d\n", tab[i]);
			i++;
		}
	}
	if (end >= start)
	{
		while (i < range)
		{
			tab[i] = start + i;
			printf("%d\n", tab[i]);
			i++;
		}
	}
	return (tab);
}

int		main(void)
{
	ft_range(1, 3);
	printf("-----------\n");
	ft_range(-1, 2);
	printf("-----------\n");
	ft_range(0, 0);
	printf("-----------\n");
	ft_range(0, -3);
	printf("-----------\n");
	ft_range(-1, -3);
	printf("-----------\n");
	ft_range(-9, -3);
	printf("-----------\n");
	ft_range(9, 3);
	return (0);
}
