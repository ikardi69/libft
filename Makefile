NAME = libft.a

CC = cc

FLAGS = -Wall -Wextra -Werror

M_SOURCES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
	ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
	ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

B_SOURCES = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
	      ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
	      ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

M_OBJECTS = $(M_SOURCES:.c=.o)

B_OBJECTS = $(B_SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(M_OBJECTS)
	ar rc $(NAME) $(M_OBJECTS)

%.o: %.c libft.h
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(M_OBJECTS) $(B_OBJECTS)

fclean:
	rm -f $(M_OBJECTS) $(B_OBJECTS) $(NAME)

re: fclean all

bonus: $(B_OBJECTS)
	ar rc $(NAME) $(B_OBJECTS)

.PHONY: clean fclean all