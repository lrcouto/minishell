/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_2d_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <lcouto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 19:57:37 by lcouto            #+#    #+#             */
/*   Updated: 2021/07/11 20:09:34 by lcouto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	free_2d_array(char **ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
		i++;
	while (i > 0)
	{
		free(ptr[i - 1]);
		i--;
	}
	free(ptr);
}
