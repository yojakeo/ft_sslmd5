/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 23:09:06 by japarbs           #+#    #+#             */
/*   Updated: 2020/03/02 19:29:26 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_ssl.h"

int	main(int ac, char **av)
{
	if (ac <= 2)
		ft_printf("Usage: ./ft_ssl <Hash> <Flags> <Args>.\n");
	else
		ft_ssl_launcher(ac, av);
	return (0);
}
