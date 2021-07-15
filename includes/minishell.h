/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 15:12:51 by phemsi-a          #+#    #+#             */
/*   Updated: 2021/07/15 01:44:29 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include "libft.h"
# include "input.h"
# include "tokenizer.h"
# include "parser.h"
# include "error.h"
# include "hashmap.h"
# include "builtin.h"
# include <stdbool.h>
# include <stdlib.h>
# include <errno.h>

typedef struct	s_minishell
{
	t_hashmap	*env;
	t_hashmap	*local_vars;
	int			input_fd;
	int			output_fd;
}				t_minishell;

/*
** GLOBAL VARIABLE FOR SESSION INFORMATION:
*/

t_minishell	g_minishell;

/*
** 2D ARRAY UTILS: 
*/

void	print_2d_array_fd(char **array, int fd);
void	free_2d_array(char **ptr);

#endif
