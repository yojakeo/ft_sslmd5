/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_md5.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 21:39:06 by japarbs           #+#    #+#             */
/*   Updated: 2020/03/05 20:08:54 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MD5_H
# define FT_MD5_H

typedef struct			s_ftmd5
{
	int 				a0;
	int 				b0;
	int 				c0;
	int 				d0;
	unsigned long long	a;
	unsigned long long	b;
	unsigned long long	c;
	unsigned long long	d;
	unsigned long long	f;
	unsigned long long	g;
	char				*res;
}						t_ftmd5;

static unsigned int g_md5_st[64] = {
	7, 12, 17, 22, 7, 12, 17, 22, 7, 12, 17, 22, 7, 12, 17, 22,
	5, 9, 14, 20, 5, 9, 14, 20, 5, 9, 14, 20, 5, 9, 14, 20,
	4, 11, 16, 23, 4, 11, 16, 23, 4, 11, 16, 23, 4, 11, 16, 23,
	6, 10, 15, 21, 6, 10, 15, 21, 6, 10, 15, 21, 6, 10, 15, 21
};

/*
**	MD5 Fucntions
*/
void					md5_init(t_ftmd5 *md5);
void					md5_algo_loop(t_ftmd5 *md5, int i);
int						md5_reverse(int i);
char					*md5_hasher(char *input);

#endif
