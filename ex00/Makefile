# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adube <adube@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/10 15:21:33 by adube             #+#    #+#              #
#    Updated: 2024/04/10 15:41:41 by adube            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#SETUP
NAME		=	megaphone
CC			=	c++
FLAGS		=	-Wall -Wextra -Werror
RM			=	rm -rf

SRCS	=	megaphone.cpp
OBJS		=	$(SRCS:.cpp=.o)

#COMMANDS
all : dir $(NAME)

$(NAME) : 	$(OBJS)
			@$(CC) $(FLAGS) $(SRCS) -o $(NAME)

$(OBJS)%.o : $(SRCS)%.cpp
				@$(CC) $(FLAGS) -c $< -o $@

run: 	all
		@./$(NAME)

clean:
				@$(RM) .o
				@echo -e "object deleted!"

fclean:			clean
				@$(RM) $(NAME)
				@echo -e "everything clean!"

re:				clean all

.PHONY:		all clean fclean bonus re
