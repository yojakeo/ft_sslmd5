# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/09 21:22:50 by japarbs           #+#    #+#              #
#    Updated: 2019/08/08 14:19:55 by japarbs          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_ssl
CFLAGS = -Wall -Werror -Wextra
OBJ = *.o
SRCF = srcs/*.c
HASH = srcs/hashes/*.c
INCLUDES = includes/*

all: $(NAME)

$(NAME):
	make -C libftplus/
	gcc $(FLAGS) -o $(NAME) $(SRCF) $(HASH) -I $(INCLUDES) -L. libftplus/libft.a

debug:
	make -C libftplus/
	gcc -g $(FLAGS) -o $(NAME) $(SRCF) -I $(INCLUDES) -L. libftplus/libft.a

clean:
	/bin/rm -f $(OBJ)
	make -C libftplus/ clean

fclean: clean
	/bin/rm -f $(NAME)
	make -C libftplus/ fclean

re: fclean all

.PHONY: all clean fclean re
