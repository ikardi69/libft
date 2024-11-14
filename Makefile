# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mteffahi <mteffahi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/14 03:42:49 by mteffahi          #+#    #+#              #
#    Updated: 2024/11/14 04:07:30 by mteffahi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and flags
CC      = gcc
CFLAGS  = -Wall -Wextra -Werror
AR      = ar rcs

# Library name
NAME    = libft.a

# Source files
SRCS    = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
          ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
          ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
          ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c \
          ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c \
          ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c \
          ft_tolower.c ft_toupper.c

# Bonus source files
BONUS_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstadd_back.c ft_lstclear.c \
             ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstsize.c

# Object files
OBJS        = $(SRCS:.c=.o)
BONUS_OBJS  = $(BONUS_SRCS:.c=.o)

# Header files
HEADER      = libft.h

# Flag to control whether bonus files are included
BONUS_FLAG  = 0

# Default target: builds library without bonus
all: $(NAME)

# Library target: builds with or without bonus files
$(NAME): $(OBJS)
ifeq ($(BONUS_FLAG), 1)
	$(AR) $(NAME) $(OBJS) $(BONUS_OBJS)
else
	$(AR) $(NAME) $(OBJS)
endif

# Compile object files
%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

# Clean up object files
clean:
	rm -f $(OBJS) $(BONUS_OBJS)

# Clean up object files and the library
fclean: clean
	rm -f $(NAME)

# Recompile everything
re: fclean all

# Bonus rule: includes bonus files and sets BONUS_FLAG
bonus: BONUS_FLAG=1
bonus: $(BONUS_OBJS) $(NAME)

.PHONY: all clean fclean re bonus
