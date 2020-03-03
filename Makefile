# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: japarbs <japarbs@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/09 21:22:50 by japarbs           #+#    #+#              #
#    Updated: 2020/03/02 19:30:05 by japarbs          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_ssl
CFLAGS = -Wall -Werror -Wextra
OBJ = *.o
SRCF = srcs/*.c
HASHES = srcs/hashes/*c
INCLUDES = includes/ft_ssl.h

all: $(NAME)

$(NAME):
	make -C libftplus/
	gcc $(FLAGS) -o $(NAME) $(SRCF) $(HASHES) -I $(INCLUDES) -L. libftplus/libft.a

debug:
	make -C libftplus/
	gcc -g $(FLAGS) -o $(NAME) $(SRCF) $(HASHES) -I $(INCLUDES) -L. libftplus/libft.a

clean:
	/bin/rm -f $(OBJ)
	make -C libftplus/ clean

fclean: clean
	/bin/rm -f $(NAME)
	make -C libftplus/ fclean

re: fclean all

.PHONY: all clean fclean re
