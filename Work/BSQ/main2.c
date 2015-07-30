/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsanzey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/26 16:12:32 by tsanzey           #+#    #+#             */
/*   Updated: 2015/07/28 12:44:01 by tsanzey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ft.h"

char	*copy(void)
{
	char	c;
	char	*str;
	int		i;

	i = 0;
	str = (char*)malloc(4096);
	while (read(0, &c, 1))
	{
		str[i] = c;
		i++;
	}
	str[i] = '\0';

	return (str);
}

int		main(int argc, char **argv)
{
	char	*str;
	int		x;
	int		y;
	int		i;
	int		fd;

	i =  1;
	if (argc <2)
		str = copy();
	else
		while(i < argc)
		{
			fd = open(argv[i], O_RDONLY);
			i++;
		}
	x = test_l(str);
	y = test_h(str);
	return (0);
}
