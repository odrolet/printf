# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oldrolet <oldrolet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/02 11:50:38 by oldrolet          #+#    #+#              #
#    Updated: 2023/02/16 12:48:16 by oldrolet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
LIBFT = libft.a
LPATH = Libft/
SRC =   ft_printf.c \
	ft_putunsigned_nbr.c \
	ft_hexadecimal.c \
	ft_utils.c \
	ft_ptr.c \

OBJS = $(SRC:%.c=%.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(LPATH)$(LIBFT) $(NAME)

$(NAME): $(OBJS)
	cp $(LPATH)$(LIBFT) $(NAME)
	ar -rcs $(NAME) $(OBJS)

$(LPATH)$(LIBFT):
	$(MAKE) -C $(LPATH)

clean:
	rm -f *.o
	rm -f $(LPATH)*.o

fclean: clean
	rm -f $(NAME)
	rm -f $(LPATH)$(LIBFT)

re: fclean all

.PHONY: all clean fclean re