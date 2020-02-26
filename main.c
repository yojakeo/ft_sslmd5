/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 23:09:06 by japarbs           #+#    #+#             */
/*   Updated: 2019/11/21 23:58:52 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/md5.h"

int	main(int ac, char **av)
{
	if (ac <= 2)
		ft_putstr("Usage: ./ft_ssl <Hash> <Flags> <Args>.\n");
	ft_ssl_launcher(ac, av);
	return (0);
}
