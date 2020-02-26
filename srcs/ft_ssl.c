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

#include "../includes/md5.h"

/*
**	The launching point of SSL.
*/

char	*ft_ssl_launcher(int ac, char **av)
{
	t_ftssl	ftssl;

	ft_ssl_init(&ftssl);
	parsing_hub(&ftssl, av);
	ftssl.res = hash_table(&ftssl);
	return (ftssl.res);
}

void	ft_ssl_init(t_ftssl *ftssl)
{
	ftssl->hashtype = 0;
	ftssl->i = 0;
	ftssl->f->p = false;
	ftssl->f->s = false;
	ftssl->f->q = false;
	ftssl->f->r = false;
}

/*
	Sudo code

	Modules
	=-=-=-=-=-=-=-=-=
	Main launcher:
	Parser:
	Dispatch Table:
	Error Manager:

	Hashers...
	MD5:
	SHA128:
	SHA256:
	SHA512:
	=-=-=-=-=-=-=-=-=
	Logic
	=-=-=-=-=-=-=-=-=
*/
