/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_md5.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 21:39:06 by japarbs           #+#    #+#             */
/*   Updated: 2019/12/11 20:47:28 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MD5_H
# define FT_MD5_H

# include "ft_ssl.h"

typedef struct			s_ftmd5
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
}						t_ftmd5;

# define F(B, C, D) 			((B) & (C)) | (~(B) & (D))
# define G(B, C, D) 			((B) & (D)) | ((C) & ~(D))
# define H(B, C, D) 			(B) ^ (C) ^ (D)
# define I(B, C, D) 			(C) ^ (B | ~(D))

# define ROTATE_32(x, n)	(((x) << (n)) | ((x) >> (32-(n))))

static unsigned int g_md5_st[64] = {
	7, 12, 17, 22, 7, 12, 17, 22, 7, 12, 17, 22, 7, 12, 17, 22,
	5, 9, 14, 20, 5, 9, 14, 20, 5, 9, 14, 20, 5, 9, 14, 20,
	4, 11, 16, 23, 4, 11, 16, 23, 4, 11, 16, 23, 4, 11, 16, 23,
	6, 10, 15, 21, 6, 10, 15, 21, 6, 10, 15, 21, 6, 10, 15, 21
};
#endif

/*
**	MD5 Fucntions
*/
void					md5_init(t_ftmd5 *md5);
void					md5_algo_loop(t_ftmd5 *md5, int i);
int    					md5_reverse(int i);
char					*md5_hasher(char *input);
