# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oldrolet <oldrolet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/11 11:53:39 by oldrolet          #+#    #+#              #
#    Updated: 2023/02/09 12:33:26 by oldrolet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# -*- MakeFile -*-

#target: dependencies
#	action

NAME = libft.a

SRC = ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_split.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c 

SRC_BONUS = ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	ft_lstclear.c \
	ft_lstiter.c \
	ft_lstmap.c

OBJS_BONUS = $(SRC_BONUS:%.c=%.o)

OBJS = $(SRC:%.c=%.o)
RM = rm -f

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME) $(SRC)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)
	
bonus: $(OBJS) $(OBJS_BONUS)
	ar -rcs $(NAME) $(OBJS) $(OBJS_BONUS)
	
clean:
	$(RM) $(OBJS) $(OBJS_BONUS)


fclean: clean	
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus