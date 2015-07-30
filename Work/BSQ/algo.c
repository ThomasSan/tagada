/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_algo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszczesn <mszczesn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/28 12:54:59 by mszczesn          #+#    #+#             */
/*   Updated: 2015/07/29 18:38:02 by tsanzey          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char ft_algo(int **map, int line, int col, char obst)
{
	int i;
	int j;
	int result;

	i = 0;
	i = 0;
	while (i <= col)
	{
		j = 0;
		while (j <= line)
		{
			if (map[i][j] == obst)
				map[i][j] = 0;
			else if ((map[i][j - 1] == 0) || (map[i - 1][j] == 0) || (map[i - 1][j - 1] == 0))
				map[i][j] = 1;
			else if	((map[i][j - 1] >= 1) && (map[i - 1][j] >= 1) && (map[i - 1][j - 1] == 1))
				map[i][j] = 2;
			else if	((map[i][j - 1] == 1) && (map[i - 1][j] >= 1) && (map[i - 1][j - 1] >= 1))
				map[i][j] = 2;
			else if	((map[i][j - 1] >= 1) && (map[i - 1][j] == 1) && (map[i - 1][j - 1] >= 1))
				map[i][j] = 2;
			else if ((map[i][j - 1] > 1) && (map[i - 1][j] > 1) && (map[i - 1][j - 1] > 1));
			map[i][j] = map[i - 1][j - 1] + 1;
			if (map[i][j] > result)
				result = map[i][j];
			j++;
		}
		i++;
	}
	return (result);
}

char	ft_adapt_map (int **map, int line, int col, char obst, char vide, char carre, int result)
{
	int i;
	int	j;
	int result2;
	int result3;

	i = 0;
	result2 = result;
	result3 = result;
	while (i <= col)
	{
		j = 0;
		while (j <= line)
		{
			if (map[i][j] == 0)
				map[i][j] = obst;
			else if (map[i][j] != result)
				map[i][j] = vide;
			else if (map[i][j] == result)
			{
				while (result2 != 0)
				{
					result3 = result;
					while(result3 != 0)
					{
						map[i - result2][j - result3] = carre;
						result3--;
					}
					result2--;
				}

			}
			j++;
		}
		i++;
	}
	return(TAG);
}

int	 ft_nb_line(char *buf)
{
	int line;

	line = 0;
	while (buf[line] != '\n')
		line ++;
	return (line);
}

int	ft_nb_col(char *buf)
{
	int col;
	int i;

	col = 0;
	i = 0;
	while (buf[i] != '\0')
	{
		if (buf[i] == '\n')
			col++;
		i++;		
	}
	return (col);
}
