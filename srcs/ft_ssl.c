/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   md5.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 20:41:59 by japarbs           #+#    #+#             */
/*   Updated: 2019/11/23 21:05:09 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_ssl.h"

/*
**	The launching point of SSL.
*/

int		ft_ssl_launcher(int ac, char **av)
{
	t_ftssl	ftssl;
	int	retval;

	ft_ssl_init(&ftssl);
	if ((retval = parsing_hub(&ftssl, ac, av)) <= 0)
		return (retval);
	ftssl.res = hash_table(&ftssl);
	output_result(&ftssl);
	return (0);
}

void	ft_ssl_init(t_ftssl *ftssl)
{
	ftssl->hashtype = 0;
	ftssl->i = 0;
	ftssl->f.p = false;
	ftssl->f.s = false;
	ftssl->f.q = false;
	ftssl->f.r = false;
}

/*
**	Sudo code
**
**	Modules
**	=-=-=-=-=-=-=-=-=
**	Main launcher:
**	Parser:
**	Dispatch Table:
**	Error Manager:
**
**	Hashers...
**	MD5:
**	SHA128:
**	SHA256:
**	SHA512:
**	=-=-=-=-=-=-=-=-=
**	Logic
**	=-=-=-=-=-=-=-=-=
*/
