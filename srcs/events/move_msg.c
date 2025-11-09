/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_msg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkham <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 19:30:33 by nkham             #+#    #+#             */
/*   Updated: 2025/11/09 19:30:35 by nkham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"

void	move_msg(t_data *data)
{
	ft_putstr_fd("\E[H\E[2J", 1);
	ft_putstr_fd(PEACH, 1);
	printf("Moves counter : %d\n", data->steps_count);
	ft_putstr_fd(RESET, 1);
}
