/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_ber.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkham <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 18:34:52 by nkham             #+#    #+#             */
/*   Updated: 2025/11/09 18:40:33 by nkham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/so_long.h"
#include ".../../includes/get_next_line.h"

int	check_extension(char *extension)
{
	size_t	length;
	int	fd;

	length = ft_strlen(extension);
	if (open(extension, O_DIRECTORY) >= 0)
	{
		fd = open(extension, O_DIRECTORY);
		close(fd);
		return (FAILURE);
	}
	else
	{
		fd = open(extension, O_RDONLY);
		close(fd);
		if ((path[length - 4] != '.' && path[length - 3] != 'b' && path[length - 2] != 'e' && path[length - 1] != 'r') || fd < 0)
			return (FAILURE);
		else
			return (SUCCESS);
	}
}
