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
SRCS = ../libft/*.c
OBJS = ../libft/*.o
HDR = ./libft.h
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

#Runs the school's syntax standards tests when on school computers + no unallowed libc headers.
norm:
	norminette -R CheckForbiddenSourceHeader ../libft

maintest:
	gcc $(SRCS) ./main.c  -I $(HDR) $(FLAGS) -o MainTest
	ar -rc $(NAME) $(OBJS)
	ranlib $(NAME)

debug:
	gcc $(SRCS) ./main.c  -I $(HDR) $(FLAGS) -o Debuggable -g
	ar -rc $(NAME) $(OBJS)
	ranlib $(NAME)
