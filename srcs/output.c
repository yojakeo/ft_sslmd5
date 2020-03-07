/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 18:21:00 by japarbs           #+#    #+#             */
/*   Updated: 2020/03/06 18:39:08 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_ssl.h"

void	output_result(t_ftssl *ftssl)
{
	if (ftssl->f.q)
		ft_printf("%s\n", ftssl->res);
	else if (ftssl->f.p)
		ft_printf("%s\n", ftssl->res);
	else if	(ftssl->f.r)
		ft_printf("%s\n", ftssl->res);
	else
		ft_printf("%s\n", ftssl->res);

}
