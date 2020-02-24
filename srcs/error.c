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

#include "../includes/md5.h"

int	handle_error(int error, t_ftssl *ftssl)
{
	if (error == -1)
		ft_printf("error: %s is not a valid path.\n", ftssl->file_path);
	else if (error == -2)
		ft_printf("error: %s is not a valid hash type.\n", \
									ftssl->input_hash_type);
	return (error);
}
