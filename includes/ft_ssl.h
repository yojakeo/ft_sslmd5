/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ssl.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 20:42:32 by japarbs           #+#    #+#             */
/*   Updated: 2019/12/08 20:11:26 by japarbs          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SSL_H
# define FT_SSL_H

# include "../libftplus/includes/libft.h"

/*
**	Structures
*/
typedef	struct			s_ftssl
{
	int					hashtype;
	char				*input_hash_type;
	int					i;
	char				*file_path;
	char				*res;
	t_f					f;
}						t_ftssl;

typedef struct			s_f
{
	bool				s;
	bool				p;
	bool				q;
	bool				r;
}						t_f;

/*
**	Launcher
*/
char					*ft_ssl_launcher(char **av);
void					ft_ssl_init(t_ftssl *ftssl);
/*
**	Parsing
*/
int						parsing_hub(t_ftssl *ftssl, int ac, char **av);
int						find_hash_type(char *hash);
int						find_flags(int ac, char **av, t_ftssl *ftssl);
/*
**	Dispatch Table
*/
char					*hash_table(t_ftssl *ftssl);
/*
**	Error Handling
*/
int						handle_error(int error, t_ftssl *ftssl);
/*
**	Hashing Algorithms
*/

#endif
