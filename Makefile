# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/18 09:12:24 by mghalmi           #+#    #+#              #
#    Updated: 2022/10/19 12:19:29 by mghalmi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS =  ft_isascii.c    ft_memcpy.c     ft_putstr_fd.c  ft_strlcat.c    ft_strrchr.c \
		ft_atoi.c       ft_isdigit.c    ft_memmove.c    ft_split.c      ft_strlcpy.c    ft_strtrim.c \
		ft_bzero.c      ft_isprint.c    ft_memset.c     ft_strchr.c     ft_strlen.c     ft_substr.c \
		ft_calloc.c     ft_itoa.c       ft_putchar_fd.c ft_strdup.c     ft_strmapi.c    ft_tolower.c \
		ft_isalnum.c    ft_memchr.c     ft_putendl_fd.c ft_striteri.c   ft_strncmp.c    ft_toupper.c \
		ft_isalpha.c    ft_memcmp.c     ft_putnbr_fd.c  ft_strjoin.c    ft_strnstr.c    
	 
OBJECTS = ft_isascii.o    ft_memcpy.o     ft_putstr_fd.o  ft_strlcat.o    ft_strrchr.o \
		ft_atoi.o       ft_isdigit.o    ft_memmove.o    ft_split.o      ft_strlcpy.o    ft_strtrim.o \
		ft_bzero.o      ft_isprint.o    ft_memset.o     ft_strchr.o     ft_strlen.o     ft_substr.o \
		ft_calloc.o     ft_itoa.o       ft_putchar_fd.o ft_strdup.o     ft_strmapi.o    ft_tolower.o \
		ft_isalnum.o    ft_memchr.o     ft_putendl_fd.o ft_striteri.o   ft_strncmp.o    ft_toupper.o \
		ft_isalpha.o    ft_memcmp.o     ft_putnbr_fd.o  ft_strjoin.o    ft_strnstr.o    

INCLUDES = libft.h

all : $(NAME)

$(NAME) : $(SRCS) libft.h
	@gcc -Wall -Wextra -Werror -I$(INCLUDES) -c $(SRCS)
	@ar rc $(NAME) $(OBJECTS)
	@ranlib $(NAME)

clean : 
	@rm -f $(OBJECTS)

fclean : clean
	@rm -rf $(NAME)
	
re : fclean all