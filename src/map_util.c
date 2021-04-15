/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_util.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adenhez <adenhez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/13 19:22:34 by adenhez           #+#    #+#             */
/*   Updated: 2021/04/14 21:50:06 by adenhez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	display_map(char **arr)
{
	int	i;
	int	j;

	i = 0;
	while (arr[i] != 0)
	{
		j = 0;
		while (arr[i][j] != '\0')
		{
			write(1, &arr[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
