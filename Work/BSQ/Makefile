# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tsanzey <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/07/26 22:22:02 by tsanzey           #+#    #+#              #
#    Updated: 2015/07/27 14:29:33 by tsanzey          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= colle-2
CC= gcc
CFLAGS= -Wall -Werror -Wextra
SRCS= main.c 
OBJS= $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) 
	$(CC) -o $(NAME) $(FLAGS) $(OBJS)

clean : 
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)
re : $(fclean) all
