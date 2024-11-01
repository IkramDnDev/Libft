NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_strlen.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strmapi.c \
		ft_strchr.c ft_strrchr.c ft_bzero.c ft_memset.c ft_atoi.c ft_calloc.c ft_memchr.c ft_memcmp.c \
		ft_memcpy.c ft_memmove.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_itoa.c ft_striteri.c \
		ft_putstr_fd.c ft_split.c ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
		ft_strncmp.c ft_strnstr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c 

BSRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS = $(SRCS:.c=.o)
OBJS_BONUS = $(BSRCS:.c=.o)

TEST = test_program

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(OBJS) $(OBJS_BONUS)
	ar rcs $(NAME) $(OBJS) $(OBJS_BONUS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

test: $(NAME)
	$(CC) $(CFLAGS) main.c -L. -lft -o $(TEST)
	./$(TEST)

clean:
	rm -f $(OBJS) $(TEST)
	rm -f $(OBJS_BONUS) $(TEST)

fclean: clean
	rm -f $(NAME)

re: fclean all
