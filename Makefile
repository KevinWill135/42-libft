SRCS = ./srcs/

PART1 = $(SRCS)ft_isalpha.c $(SRCS)ft_isdigit.c $(SRCS)ft_isalnum.c $(SRCS)ft_isascii.c $(SRCS)ft_isprint.c $(SRCS)ft_strlen.c $(SRCS)ft_toupper.c \
$(SRCS)ft_tolower.c $(SRCS)ft_strchr.c $(SRCS)ft_strrchr.c $(SRCS)ft_strncmp.c $(SRCS)ft_memset.c $(SRCS)ft_bzero.c $(SRCS)ft_memchr.c $(SRCS)ft_memchr.c \
$(SRCS)ft_memcpy.c $(SRCS)ft_memcmp.c $(SRCS)ft_memmove.c $(SRCS)ft_strnstr.c $(SRCS)ft_strlcpy.c $(SRCS)ft_strlcat.c $(SRCS)ft_atoi.c $(SRCS)ft_calloc.c $(SRCS)ft_strdup.c

PART2 = $(SRCS)ft_substr.c $(SRCS)ft_strjoin.c $(SRCS)ft_strtrim.c $(SRCS)ft_split.c $(SRCS)ft_itoa.c $(SRCS)ft_strmapi.c $(SRCS)ft_striteri.c $(SRCS)ft_putchar_fd.c \
$(SRCS)ft_putstr_fd.c $(SRCS)ft_putendl_fd.c $(SRCS)ft_putnbr_fd.c

BONUS_PART = $(SRCS)ft_lstnew.c $(SRCS)ft_lstadd_front.c $(SRCS)ft_lstsize.c $(SRCS)ft_lstlast.c $(SRCS)ft_lstadd_back.c $(SRCS)ft_lstdelone.c \
$(SRCS)ft_lstclear.c $(SRCS)ft_lstiter.c $(SRCS)ft_lstmap.c

SRC = $(PART1) $(PART2)

OBJS = $(SRC:.c=.o)
BONUS_OBJS = $(BONUS_PART:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I ./includes

NAME = libft.a

RM = rm -f

all: $(NAME) bonus

$(NAME): $(OBJS)
	ar rcs $@ $(OBJS)
	ranlib $(NAME)

bonus: $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

%.o: %.c
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
