/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsanzey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/30 20:24:31 by tsanzey           #+#    #+#             */
/*   Updated: 2015/07/30 21:04:22 by tsanzey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] = s2[i]) != '\0')
	{
		i++;
	}
	s1[i] = '\0';
	return(s1);
}

int		main(void)
{
	char	str1[20] ="Salut, c'est cool";
	char	str2[20] ="Hello";
	char	str3[20] ="Salut, c'est cool";
	char	str4[20] ="Hello";

	printf("%s\n",ft_strcpy(str1, str2));
//	printf("%s\n",ft_strcpy(str2, str1));
	printf("%s\n",strcpy(str3, str4));
//	printf("%s\n",strcpy(str4, str3));
}
