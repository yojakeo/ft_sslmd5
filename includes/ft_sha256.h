/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sha256.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 19:12:54 by japarbs           #+#    #+#             */
/*   Updated: 2020/03/02 19:17:45 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct			s_ftsha256
{
	int 				a0;
	int 				b0;
	int 				c0;
	int 				d0;
	unsigned long long	A;
    unsigned long long	B;
    unsigned long long	C;
    unsigned long long	D;
    unsigned long long	F;
	unsigned long long	G;
	char				*res;
}						t_ftsha256;

char	*sha256_hasher(char *input);
