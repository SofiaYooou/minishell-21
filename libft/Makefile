# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: laddie <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/31 13:47:31 by laddie            #+#    #+#              #
#    Updated: 2020/11/11 21:21:32 by laddie           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_memcpy.c ft_memccpy.c ft_strlcat.c ft_memchr.c ft_memmove.c ft_strlcpy.c ft_bzero.c ft_memcmp.c ft_memset.c ft_strlen.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJS = $(SRCS:.c=.o)

SRCS_bonus = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS_bonus = $(SRCS_bonus:.c=.o)

GCC = gcc

CFLAGS = -Wall -Wextra -Werror -I.

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

bonus: all $(OBJS_bonus)
	ar rc $(NAME) $(OBJS_bonus)

%.o:%.c libft.h
	$(GCC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) *.o

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean fclean all re bonus
