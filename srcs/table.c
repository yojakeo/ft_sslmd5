/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   table.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 20:48:00 by japarbs           #+#    #+#             */
/*   Updated: 2020/01/02 18:52:49 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_ssl.h"

char	*hash_table(t_ftssl *ftssl)
{
	static char	*(*p[])() = {
		[0] = md5_hasher,
		[1] = sha256_hasher,
	};

	return (p[ftssl->hashtype](ftssl));
}
