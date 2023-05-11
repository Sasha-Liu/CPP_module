# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/27 13:10:00 by hsliu             #+#    #+#              #
#    Updated: 2023/05/11 11:44:29 by hsliu            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	easyFind

MAKE	=	make

SRC_DIR	=	./

OBJ_DIR	=	./.obj/

INC_DIR	=	./

LIST_SRC	=	main.cpp

LIST_OBJ	=	$(LIST_SRC:.cpp=.o) 

LIST_INC	=	easyfind.hpp

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
