/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsanzey <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/28 18:36:30 by tsanzey           #+#    #+#             */
/*   Updated: 2015/07/29 16:53:25 by tsanzey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# define BUF_SIZE 4096

int				test_l(char *str);
int				test_h(char *str);
int				ft_atoi(char *str);
void			ft_putchar(char c);
void			ft_putstr(char *str);
void			ft_putnbr(int nb);

typedef	struct	s_params
{
	char		empty;
	char		full;
	char		obstacle;
	int			nb_lines;
}				t_params;
#endif
