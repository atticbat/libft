# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: khatlas <khatlas@student.42heilbronn.fr>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/26 14:12:23 by khatlas           #+#    #+#              #
#    Updated: 2022/04/13 18:09:56 by khatlas          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -*- MakeFile -*-

NAME := libft.a
OBJECTS := ft_i*.o ft_s*.o ft_m*.o ft_b*.o ft_t*.o ft_a*.o ft_c*.o ft_p*.o
FUNCTS := ft_i*.c ft_s*.c ft_m*.c ft_b*.c ft_t*.c ft_a*.c ft_c*.c ft_p*.c
BOBJECTS := ft_l*.o
BFUNCTS := ft_l*.c
CC := cc
CFLAGS := -Wall -Wextra -Werror

all: $(NAME)

$(NAME): comp
	@ar -rcs $@ $(OBJECTS)

comp:
	@$(CC) $(CFLAGS) -c $(FUNCTS) 

clean:
	@/bin/rm -f $(OBJECTS)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

bonus: $(NAME) bcomp
	@ar -rcs $(NAME) $(BOBJECTS)

bcomp:
	@$(CC) $(CFLAGS) -c $(BFUNCTS)
	
.PHONY: all clean fclean re bonus

