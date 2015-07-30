/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsanzey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/29 20:28:49 by tsanzey           #+#    #+#             */
/*   Updated: 2015/07/29 20:41:12 by tsanzey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while(*str)
	{
		str++;
		i++;
	}
	return (i - 1);
}

char	*ft_strrev(char *str)
{	
	int		i;
	int		j;
	char	tmp;

	i = 0;
	j = ft_strlen(str);
	while(i <= j / 2)
	{
		tmp = str[i];
		str[i] = str[j - i];
		str[j - i] = tmp;
		i++;
	}
	return (str);
}

int		main(int ac, char **av)
{
	(void)ac;
	printf("%s", ft_strrev(av[1]));
	return(0);
}
