/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 20:48:09 by japarbs           #+#    #+#             */
/*   Updated: 2019/12/08 20:06:54 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_ssl.h"

int	handle_error(int error, t_ftssl *ftssl)
{
	if (error == -1)
		ft_printf("error: %s is not a valid path.\n", ftssl->file_path);
	else if (error == -2)
		ft_printf("error: %s is not a valid hash type.\n", \
									ftssl->errorstr);
	else if (error == -3)
		ft_printf("Invalid flag.\n");
	return (error);
}
