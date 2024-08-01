# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adube <adube@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/24 09:44:34 by adube             #+#    #+#              #
#    Updated: 2024/07/30 10:49:47 by adube            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	claptrap
CC			=	c++
FLAGS		=	-Wall -Wextra -Werror -std=c++98
RM			=	rm -rf

SRCS	=	ClapTrap.cpp \
			main.cpp
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