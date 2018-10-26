# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcope <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/11 17:53:05 by jcope             #+#    #+#              #
#    Updated: 2018/09/11 17:55:32 by jcope            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_strlen.c ft_strcpy.c ft_strdup.c ft_strncpy.c ft_strcmp.c ft_strchr.c ft_isdigit.c ft_toupper.c ft_tolower.c ft_memset.c
OBJS = ft_strlen.o ft_strcpy.o ft_strdup.o ft_strncpy.o ft_strcmp.o ft_strchr.o ft_isdigit.o ft_toupper.o ft_tolower.o ft_memset.o
HDR = libft.h
FLAGS = -Wall -Wextra -Werror

all: $(NAME)
	
$(NAME):
	gcc $(SRCS) $(FLAGS) -I $(HDR) -c 
	ar -rc $(NAME) $(OBJS)
	ranlib $(NAME)

clean: 
	/bin/rm -f $(OBJS)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all 
