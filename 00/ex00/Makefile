# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/23 10:43:33 by hsliu             #+#    #+#              #
#    Updated: 2023/02/23 12:25:36 by hsliu            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	megaphone

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRC		=	megaphone.cpp

OBJ		=	$(SRC:.cpp=.o)

all 	:	$(NAME)

$(NAME)	:	$(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o : %.c 
	$(CC) $(CFLAGS) -c $< -o $@

clean : 
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean $(NAME)

.PHONY: clean fclean re all
