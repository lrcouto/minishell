/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builtin.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phemsi-a <phemsi-a@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 17:40:26 by lcouto            #+#    #+#             */
/*   Updated: 2021/07/17 10:21:31 by phemsi-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUILTIN_H
# define BUILTIN_H

# include "minishell.h"

/*
** ENV:
*/

t_hashmap	*env_to_hashmap(char **env);
char		**hashmap_to_env(t_hashmap *table);
void		print_environment(t_hashmap *env, int fd);
int			export(void);
void		quick_sort_2d_array(char **array, int left, int right);

#endif