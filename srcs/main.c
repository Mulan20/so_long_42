/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkham <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 16:48:06 by nkham             #+#    #+#             */
/*   Updated: 2025/11/09 18:34:04 by nkham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"
#include "../includes/get_next_line.h"

int main(int argc, char **argv)
{
	t_data	data;
	if (argc == 2)
	{
		if (check_extension(argv(1)) == FAILURE)
			error_msg(ERRBER, &data);
		turn_map(argv[1], &data);
		init_map(&data);
		check_map(&data);
		init_player(&data);
		init_window(&data);
		init_images(&data);
		render(&data);
		loop_images(data);
		destroy_images(data);
		free(data.mlx_ptr);
		if (data.map.map)
			ft_free(data.map.map);
	}
}
