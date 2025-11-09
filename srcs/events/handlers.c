/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkham <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 19:29:48 by nkham             #+#    #+#             */
/*   Updated: 2025/11/09 19:29:51 by nkham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

int	handle_resize(t_data *data)
{
	render(data);
	return (0);
}

int	handle_keypress(int keysym, t_data *data)
{
	if (keysym == XK_Escape)
	{
		mlx_destroy_window(data->mlx, data->win);
		data->win = NULL;
	}
	else if (ft_strchr("wasd", keysym))
		move_player(data, keysym);
	return (0);
}

int	handle_btnrealease(t_data *data)
{
	mlx_destroy_window(data->mlx, data->win);
	data->win = NULL;
	return (0);
}
