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

# NAME = libft.a

# SRCS =  ft_isascii.c    ft_memcpy.c     ft_putstr_fd.c  ft_strlcat.c    ft_strrchr.c \
# 		ft_atoi.c       ft_isdigit.c    ft_memmove.c    ft_split.c      ft_strlcpy.c    ft_strtrim.c \
# 		ft_bzero.c      ft_isprint.c    ft_memset.c     ft_strchr.c     ft_strlen.c     ft_substr.c \
# 		ft_calloc.c     ft_itoa.c       ft_putchar_fd.c ft_strdup.c     ft_strmapi.c    ft_tolower.c \
# 		ft_isalnum.c    ft_memchr.c     ft_putendl_fd.c ft_striteri.c   ft_strncmp.c    ft_toupper.c \
# 		ft_isalpha.c    ft_memcmp.c     ft_putnbr_fd.c  ft_strjoin.c    ft_strnstr.c    
	 
# OBJECTS = ft_isascii.o    ft_memcpy.o     ft_putstr_fd.o  ft_strlcat.o    ft_strrchr.o \
# 		ft_atoi.o       ft_isdigit.o    ft_memmove.o    ft_split.o      ft_strlcpy.o    ft_strtrim.o \
# 		ft_bzero.o      ft_isprint.o    ft_memset.o     ft_strchr.o     ft_strlen.o     ft_substr.o \
# 		ft_calloc.o     ft_itoa.o       ft_putchar_fd.o ft_strdup.o     ft_strmapi.o    ft_tolower.o \
# 		ft_isalnum.o    ft_memchr.o     ft_putendl_fd.o ft_striteri.o   ft_strncmp.o    ft_toupper.o \
# 		ft_isalpha.o    ft_memcmp.o     ft_putnbr_fd.o  ft_strjoin.o    ft_strnstr.o    

# SRCB =  ft_lstnew.c ft_lstadd_front.c ft_lstlast.c ft_lstadd_back.c \
#         ft_lstsize.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
#         ft_lstmap.c

# OBJECTSBON = ft_lstnew.o ft_lstadd_front.o ft_lstlast.o ft_lstadd_back.o \
#         ft_lstsize.o ft_lstdelone.o ft_lstclear.o ft_lstiter.o \
#         ft_lstmap.o
					
# INCLUDES = libft.h

# all : $(NAME)

# $(NAME) : $(SRCS) libft.h
# 	@gcc -Wall -Wextra -Werror -I$(INCLUDES) -c $(SRCS)
# 	@ar rc $(NAME) $(OBJECTS)
# 	@ranlib $(NAME)

# bonus : $(SRCB) libft.h
# 	@gcc -Wall -Wextra -Werror -I$(INCLUDES) -c $(SRCB)
# 	@ar rc bonus $(OBJECTSBON)
# 	@ranlib bonus

# clean : 
# 	@rm -f $(OBJECTS) $(OBJECTSBON)

# fclean : clean
# 	@rm -rf $(NAME) bonus
	
# re : fclean all

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

OBJ = $(SRC:%.c=%.o)

OBJB = $(SRCB:%.c=%.o)

CFALGS =  -Wall -Wextra -Werror

CC = cc

INCLUDE = libft.h



all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)

%.o:%.c $(INCLUDE)
	@$(CC) -c $(CFALGS) $< -o $@

bonus: $(OBJ) $(OBJB)
	@ar rc $(NAME) $(OBJB) $(OBJ)

clean:
	@rm -rf $(OBJ) $(OBJB)

fclean: clean
	@rm -rf $(NAME)

re: fclean all