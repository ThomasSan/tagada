/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsanzey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/29 19:42:48 by tsanzey           #+#    #+#             */
/*   Updated: 2015/07/29 20:27:01 by tsanzey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	if (src)
	{
		dest = (char*)malloc(sizeof(*src + 1));
		if (dest != NULL)
		{
			while (src[i])
			{
				dest[i] = src[i];
				i++;
			}
			dest[i] = '\0';
			return (dest);
		}
		return (NULL);
	}
	return (NULL);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
int		main(int ac, char **av)
{	
	(void)ac;
//	ft_putstr(ft_strdup(av[1]));
	ft_putstr(strdup(av[1]));
	return (0);
}
