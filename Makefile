# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kaogawa <kaogawa@student.42tokyo.jp>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/07/25 10:09:52 by kaogawa           #+#    #+#              #
#    Updated: 2026/07/25 10:09:52 by kaogawa          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = libft.a

PART1   = ft_tolower.c ft_toupper.c ft_isprint.c ft_isascii.c ft_isalnum.c \
          ft_isdigit.c ft_isalpha.c ft_atoi.c ft_strlen.c ft_strlcat.c \
          ft_strncmp.c ft_strdup.c ft_calloc.c ft_memcpy.c ft_strchr.c \
          ft_strrchr.c ft_strnstr.c ft_bzero.c ft_memchr.c ft_memcmp.c \
          ft_memset.c ft_memmove.c ft_strlcpy.c

PART2   = ft_itoa.c ft_strjoin.c ft_split.c ft_striteri.c ft_strmapi.c \
          ft_substr.c ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
          ft_putnbr_fd.c

PART3   = ft_lstnew.c ft_lstadd_front.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c \
          ft_lstiter.c ft_lstmap.c ft_lstsize.c ft_lstlast.c

SRC     = ${PART1} ${PART2} ${PART3}
OBJS    = ${SRC:.c=.o}

CC      = cc
CFLAGS  = -Wall -Wextra -Werror
INCLUDE = -I .


all: ${NAME}


${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}


%.o: %.c libft.h
	${CC} ${CFLAGS} ${INCLUDE} -c $< -o $@

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}


re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY: all clean fclean re
