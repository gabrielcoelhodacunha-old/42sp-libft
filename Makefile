# **************************************************************************** #
#                                                                              #
#                                                          :::      ::::::::   #
#   Makefile                                             :+:      :+:    :+:   #
#                                                      +:+ +:+         +:+     #
#   By: gcoelho- <gcoelho-@student.42sp.org.br>      +#+  +:+       +#+        #
#                                                  +#+#+#+#+#+   +#+           #
#   Created: 2021/08/26 10:22:33 by gcoelho-            #+#    #+#             #
#   Updated: 2021/08/26 10:37:53 by gcoelho-           ###   ########.fr       #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CC	= clang
CFLAGS	= -Wall -Wextra -Werror
SRC	= ft_isalpha.c \
	  ft_isdigit.c \
	  ft_isalnum.c \
	  ft_isascii.c \
	  ft_isprint.c \
	  ft_strlen.c \
	  ft_memset.c \
	  ft_bzero.c \
	  ft_memcpy.c
INCLUDE = libft.h
OBJS	= $(SRC:.c=.o)
AR	= ar rcs
RM	= rm -f

.c.o:		$(SRC)
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS) $(INCLUDE)
		$(AR) $(NAME) $(OBJS)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
