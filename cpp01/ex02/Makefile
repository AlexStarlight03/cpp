# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adube <adube@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/16 11:56:41 by adube             #+#    #+#              #
#    Updated: 2024/04/16 11:57:00 by adube            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#SETUP
NAME		=	brain
CC			=	c++
FLAGS		=	-Wall -Wextra -Werror -std=c++98
RM			=	rm -rf

SRCS	=	main.cpp
OBJS	= $(SRCS:.cpp=.o)


#COMMANDS
all : $(NAME)

$(NAME) : 	$(OBJS)
			@$(CC) $(FLAGS) $(SRCS) -o $(NAME)

run: 	all
		@./$(NAME)

clean:
				@$(RM) $(OBJS)
				@echo -e "object deleted!"

fclean:			clean
				@$(RM) $(NAME)
				@echo -e "everything clean!"

re:				clean all

.PHONY:		all clean fclean bonus re
