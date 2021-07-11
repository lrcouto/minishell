/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcouto <lcouto@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 15:12:51 by phemsi-a          #+#    #+#             */
/*   Updated: 2021/07/11 19:58:37 by lcouto           ###   ########.fr       */
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

/*
** 2D ARRAY UTILS: 
*/

void	print_2d_array_fd(char **array, int fd);
void	free_2d_array(char **ptr);

#endif
