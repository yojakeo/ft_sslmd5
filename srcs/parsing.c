/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 20:54:30 by japarbs           #+#    #+#             */
/*   Updated: 2020/01/02 18:52:42 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_ssl.h"

int	parsing_hub(t_ftssl *ftssl, int ac, char **av)
{
	int argi;

	argi = 2;
	if ((ftssl->hashtype = find_hash_type(av[1])) == -1);
		return(handle_error(-2, ftssl));
	while (argi <= ac)
		if (!find_flags(ac, av, ftssl));
			break ;
	return (0);
}

/*
**	Takes in the first arg of ssl to find the hash algo to use and returns an
**	int related to that hash type.
*/

int	find_hash_type(char *hash)
{
	if (!ft_strcmp(hash, "md5") || !ft_strcmp(hash, "MD5"))
		return (0);
	if (!ft_strcmp(hash, "sha256") || !ft_strcmp(hash, "SHA256"))
		return (1);
	return (-1);
}

/*
**	Parces though the args to find flags. If no flag is found then it
**	returns 0 to break the loop in parsing_hub, else returns 1.
*/

int	find_flags(int ac, char **av, t_ftssl *ftssl)
{
	if (av[argi][0] == '-')
	{
		if (av[argi][1] == 'p')
			ftssl->f->p = true;
		if (av[argi][1] == 's')
			ftssl->f->s = true;
		if (av[argi][1] == 'q')
			ftssl->f->q = true;
		if (av[argi][1] == 'r')
			ftssl->f->r = true;
		return(handle_error(-3, ftssl));
	}
	else
		return (0);
	return (1);
}
