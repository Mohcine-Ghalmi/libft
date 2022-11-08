# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 09:12:24 by mghalmi           #+#    #+#              #
#    Updated: 2022/10/20 11:22:12 by mghalmi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_memset.c ft_atoi.c ft_isalpha.c ft_isdigit.c ft_bzero.c \
                ft_isalnum.c ft_isprint.c ft_toupper.c ft_tolower.c \
                 ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_strlen.c \
                 ft_strlcpy.c ft_strlcat.c ft_strchr.c ft_isascii.c \
                 ft_calloc.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
                 ft_memmove.c ft_strdup.c ft_putnbr_fd.c ft_putstr_fd.c \
                 ft_putchar_fd.c ft_itoa.c ft_putendl_fd.c ft_substr.c \
                 ft_strjoin.c ft_strtrim.c ft_strmapi.c ft_striteri.c \
                 ft_split.c

SRCB = ft_lstnew.c ft_lstadd_front.c ft_lstlast.c ft_lstadd_back.c \
                    ft_lstsize.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
                    ft_lstmap.c

OBJ = $(SRC:.c=.o)

OBJB = $(SRCB:.c=.o)

CFALGS =  -Wall -Wextra -Werror

CC = cc

INCLUDE = libft.h

all: $(NAME)

$(NAME): $(OBJ) $(INCLUDE)
	ar rc $(NAME) $(OBJ)

bonus: $(OBJ) $(OBJB)
	ar rc $(NAME) $(OBJB) $(OBJ)

clean:
	rm -rf $(OBJ) $(OBJB)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re
