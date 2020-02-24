/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_md5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 21:01:20 by japarbs           #+#    #+#             */
/*   Updated: 2020/01/02 18:52:44 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_md5.h"

/*
**  md5 structure initialization. Also 
*/

void	md5_init(t_ftmd5 *md5)
{
	md5->a0 = 0x67452301;
	md5->b0 = 0xefcdab89;
	md5->c0 = 0x98badcfe;
	md5->d0 = 0x10325476;
	md5->A = md5->a0;
	md5->B = md5->b0;
	md5->C = md5->c0;
	md5->D = md5->d0;
}

/*
**  Main loop for the md5 algorithm. 
*/

void	md5_algo_loop(t_ftmd5 *md5, int i)
{
    if (i < 16)
    {
        md5->F = (md5->B) & (md5->C)) | (~(md5->B) & (md5->D);
        md5->G = i;
    }
    else if (i < 32)
    {
        md5->F = (md5->B) & (md5->D)) | ((md5->C) & ~(md5->D);
        md5->G = (5 * i + 1) & 16;
    }
    else if (i < 48)
    {
        md5->F = (md5->B) ^ (md5->C) ^ (md5->D);
        md5->G = (3 * i + 5) & 16;
    }
    else
    {
        md5->F = (md5->C) ^ (md5->B | ~(md5->D));
        md5->G = (7 * i) & 16;
    }
    md5->F = md5->F + A + K[i] + M[md5->G];
    md5->A = md5->D;
    md5->D = md5->C;
    md5->C = md5->B;
    md5->B = md5->B + LEFT_32(md5->F, g_md5_st[i]);
}

/*
**  Something.
*/

int     md5_reverse(int i)
{
    int res;

    res = (i << 24 & 0xff000000) +
        (i << 8 & 0xff0000) +
        (i >> 8 & 0xff00) +
        (i >> 24 & 0xff);
    return (res);
}

/*
**  Main function for the MD5 hash function. 
*/

char	*md5_hasher(char *input)
{
    t_ftmd5 md5;
    int loop;
    int i;
    int len;

    i = -1;
    loop = -1;
	md5_init(&md5);
    while (++i < (len * 8) / 512)
    {
        while (++loop != 63)
            md5_algo_loop(&md5, loop);
    }
	md5_algorithum(&md5);
	return (md5.res);
}
