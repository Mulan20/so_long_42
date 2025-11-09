/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkham <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 20:13:31 by nkham             #+#    #+#             */
/*   Updated: 2025/11/09 18:54:08 by nkham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

#include <stdlib.h>
#include <unistd.h>
#include <X11/keysym.h>
#include <X11/X.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "get_next_line.h"
#include "../libft/libft.h"
#include "../mlx/mlx.h"

typedef struct s_data
{
	void	*mlx;
	void	*win;
	int	steps_count;
	int	p_i;
	int	p_j;
}
#endif 

