# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hsliu <hsliu@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/24 15:31:43 by hsliu             #+#    #+#              #
#    Updated: 2023/02/24 15:53:36 by hsliu            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	phonebook

MAKE	=	make

SRC_DIR	=	./src/

OBJ_DIR	=	./.obj/

INC_DIR	=	./include/

LIST_SRC	=	main.cpp ClassPhoneBook.cpp ClassContact.cpp utils.cpp

LIST_OBJ	=	$(LIST_SRC:.cpp=.o) 

LIST_INC	=	PhoneBook.hpp ClassPhoneBook.hpp ClassContact.hpp

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
