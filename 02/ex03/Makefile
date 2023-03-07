# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sasha <sasha@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/24 15:31:43 by hsliu             #+#    #+#              #
#    Updated: 2023/03/07 15:24:50 by sasha            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	bsp

MAKE	=	make

SRC_DIR	=	./

OBJ_DIR	=	./.obj/

INC_DIR	=	./

LIST_SRC	=	main.cpp Fixed.cpp Point.cpp bsp.cpp

LIST_OBJ	=	$(LIST_SRC:.cpp=.o) 

LIST_INC	=	Fixed.hpp Point.hpp

SRC		=	$(addprefix $(SRC_DIR), $(LIST_SRC))

OBJ		=	$(addprefix $(OBJ_DIR), $(LIST_OBJ))

INC		=	$(addprefix $(INC_DIR), $(LIST_INC))

CC		=	c++

CFLAGS	=	-Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME)	:	$(OBJ_DIR) $(OBJ) $(INC) 
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ) 

$(OBJ_DIR)%.o : $(SRC_DIR)%.cpp $(INC)
	$(CC) $(CFLAGS) -c $< -o $@ -I $(INC_DIR) 

$(OBJ_DIR) : 
	mkdir -p $(OBJ_DIR)

clean : 
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re:	fclean $(NAME)

.PHONY: clean fclearn re all
