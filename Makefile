# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kde-paul <kde-paul@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/20 21:11:34 by kde-paul          #+#    #+#              #
#    Updated: 2025/11/15 19:58:13 by kde-paul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PART1 = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_toupper.c \
ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memset.c ft_bzero.c ft_memchr.c ft_memchr.c \
ft_memcpy.c ft_memcmp.c ft_memmove.c ft_strnstr.c ft_strlcpy.c ft_strlcat.c ft_atoi.c ft_calloc.c ft_strdup.c

PART2 = ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

PART3 = ft_printf.c ft_putnbr_base.c ft_putptr_base.c ft_count_nb_len.c

BONUS_PART = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

SRC = $(PART1) $(PART2) $(PART3)

OBJS = $(SRC:.c=.o)
BONUS_OBJS = $(BONUS_PART:.c=.o)
BONUS_DONE = .bonus_done

CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

RM = rm -f

all: $(NAME)

$(NAME): $(OBJS)
	@ar rcs $@ $^
	@echo "Done, now u can use me LoL"

bonus: $(BONUS_OBJS)
	@ar rcs $(NAME) $^

%.o: %.c
	@echo "Compiling....."
	@$(CC) -I. $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS) $(BONUS_OBJS) $(BONUS_DONE)

fclean: clean
	$(RM) $(NAME)

re: fclean all
