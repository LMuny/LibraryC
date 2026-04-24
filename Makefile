# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lmuny <lmuny@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/24 10:56:52 by lmuny             #+#    #+#              #
#    Updated: 2026/04/24 14:24:04 by lmuny            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_atoi.c ft_isalpha.c ft_itoa.c ft_memmove.c ft_putnbr_fd.c ft_strdup.c ft_strlen.c ft_strtrim.c\
	ft_bzero.c ft_isascii.c ft_memchr.c ft_memset.c ft_putstr_fd.c ft_strjoin.c ft_strncmp.c ft_substr.c\
	ft_calloc.c ft_isdigit.c ft_memcmp.c ft_putchar_fd.c ft_split.c ft_strlcat.c ft_strnstr.c ft_toupper.c\
	ft_tolower.c ft_isalnum.c ft_isprint.c ft_memcpy.c ft_putendl_fd.c ft_strchr.c ft_strlcpy.c ft_strrchr.c\
	ft_strmapi.c ft_striteri.c

OBJS = $(SRCS:.c=.o)
TOTAL = $(words $(SRCS))
COUNT = 0

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@printf "\r%-40s\n" "$(NAME) ready"

%.o: %.c
	$(eval COUNT=$(shell echo $$(($(COUNT)+1))))
	@printf "\r[$(COUNT)/$(TOTAL)] Compiling... %-30s" $<
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS)
	@echo "clean done"

fclean: clean
	@rm -rf $(NAME)
	@echo "fclean done"

re: fclean all

.PHONY: all clean fclean re
