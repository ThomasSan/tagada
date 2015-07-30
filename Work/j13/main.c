/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsanzey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/25 11:18:26 by tsanzey           #+#    #+#             */
/*   Updated: 2015/07/25 16:24:27 by tsanzey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_btree.h"

int	str_cmp(char *s1, char *s2)
{
	while(*s1 == *s2)
	{
		s1++;
		s2++;
	}
	if (*s1 == '\0')
		return (0);
	else
		return(*s1 - *s2);
}

int main()
{
	t_btree *tree = NULL;
	t_btree *left = NULL;
	t_btree *right = NULL;
	t_btree *search = NULL;
	char *str;
	char *str2;
	char *str3;

	str = malloc(sizeof(char) * 8);
	str = "Bonjour";
	str2 = malloc(sizeof(char) * 8);
	str2 = "Salut";
	str3 = malloc(sizeof(char) * 8);
	str3 = "Abba";
	btree_insert_data(&tree, str, (str_cmp));
	btree_insert_data(&tree, str2,(str_cmp));
	btree_insert_data(&tree, str3,(str_cmp));
	printf("%s\n", tree->item);
	right = tree->right;
	left = tree->left;
	printf("%s\n", left->item);
	printf("%s\n", right->item);
	search = btree_search_item(tree, str, (strcmp));
	printf("result = %s", search->item);
	return(0);
}
