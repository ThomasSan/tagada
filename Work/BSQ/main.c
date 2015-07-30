/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsanzey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/26 16:12:32 by tsanzey           #+#    #+#             */
/*   Updated: 2015/07/29 18:38:06 by tsanzey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "ft.h"

int test_h(char *str);
int	test_l(char *str);

char	*ft_joint(char *s1, char *s2)
{
	int		length;
	int		length2;
	int		i;
	char	*str;

	while (s1[length])
		length++;
	while (s2[length2])
		length2++;
	if 	(str = (char*)malloc(sizeof(char*) *(length + length2)));
	i = 0;
	while (i < length)
	{
		str[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < length2)
	{
		str[i + length] = s2[i];
		i++;
	}
	str[length + length] = '\0';
	return (str);
}

int		test_first_line(void)
{
	int		i;
	int		ret;
	char	buf[BUF_SIZE];
	char	*str
	
	i = 0;
	ret = 0;
	str = (char*)malloc(sizeof(char*) * BUF_SIZE)
	while (ret = read(0, buf, BUF_SIZE))
		str = ft_joint(str, buf);
	return (1);
}

int		main(/*int argc, char **argv*/)
{
	char	*str;
//	int		length;
//	t_params	*line;


	str = test_first_line();
	return (0);
}
