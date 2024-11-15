# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mteffahi <mteffahi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/14 03:42:49 by mteffahi          #+#    #+#              #
#    Updated: 2024/11/15 02:46:12 by mteffahi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar
RC = rcs
RM = rm -f

# Mandatory Part
SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
       ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
       ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
       ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
       ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
       ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
       ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

# Bonus Part
BONUS_SRCS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
             ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
             ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

# Object files
OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

# Rules
all: $(NAME)

# Create the main archive (libft.a) with mandatory object files
$(NAME): $(OBJS)
	$(AR) rcs $(NAME) $(OBJS)

# Only add the bonus object files to the existing libft.a
bonus: $(BONUS_OBJS)
	$(AR) rcs $(NAME) $(BONUS_OBJS)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

# Compilation rule for .c to .o
.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

# Phony targets
.PHONY: all clean fclean re bonus
